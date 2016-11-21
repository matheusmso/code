#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e4+7;
vector<int> adj[N];
int seen[N], c;

void dfs(int u) {
    seen[u] = 1;
    for (int x : adj[u]) {
        if (!seen[x]) {
            c++;
            dfs(x);
        }
    }
}

int main() {
    int n, m;
    while (scanf(" %d %d", &n, &m) && n) {
        for (auto& x : adj)
            x.clear();
        memset(seen, 0, sizeof(seen));
        for (int i = 0; i < m; i++) {
            int u, v, k;
            scanf(" %d %d %d", &u, &v, &k);
            adj[u].push_back(v);
            if (k == 2)
                adj[v].push_back(u);
        }
        c = 1;
        dfs(1);
        printf("%d\n", c == n ? 1 : 0);
    }
    return 0;
}
