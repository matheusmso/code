#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n, m, d[N];
vector<int> adj[N];

int main() {
    while (scanf(" %d %d", &n, &m) && n) {
        for (int i = 0; i < m; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            adj[x].push_back(y);
            d[y]++;
        }
        queue<int> q;
        for (int i = 1; i <= n; i++)
            if (d[i] == 0)
                q.push(i);
        vector<int> ans;
        while (!q.empty()) {
            int x = q.front();
            q.pop();
            ans.push_back(x);
            for (int u : adj[x]) {
                d[u]--;
                if (d[u] == 0)
                    q.push(u);
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            printf("%d%c", ans[i], " \n"[i == ans.size()-1]);
            adj[i].clear();
        }
        memset(d, 0, sizeof(d));
    }
    return 0;
}


