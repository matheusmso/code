#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
int n, m, l, t, ans, vis[N];
vector<int> adj[N];

void dfs(int v) {
    vis[v] = 1;
    ans++;
    for (int u : adj[v])
        if (vis[u] == 0)
            dfs(u);
}

int main() {
    scanf(" %d", &t);
    while(t--) {
        scanf(" %d %d %d", &n, &m, &l);
        for (int i = 1; i <=n; i++) {
            adj[i].clear();
            vis[i] = 0;
        }
        for (int i = 0; i < m; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            adj[x].push_back(y);
        }
        ans = 0;
        for (int i = 0; i < l; i++) {
            int x;
            scanf(" %d", &x);
            if (vis[x] == 0)
                dfs(x);
        }
        printf("%d\n", ans);
    }
    return 0;
}


