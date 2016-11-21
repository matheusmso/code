#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e4+7;
vector<int> adj[N];
int n, m, low[N], d[N], seen[N], t;
bool hasbridge;

void dfs(int u, int p) {
    int ns = 0;
    bool any = false;
    seen[u] = 1;
    d[u] = low[u] = t++;
    for (int x : adj[u]) {
        if (!seen[x]) {
            dfs(x, u);
            ns++;
            if (low[x] >= d[u]) any = true;
            low[u] = min(low[x], low[u]);
            if (low[x] > d[u]) hasbridge = true;
        }
        else if (x != p)
            low[u] = min(low[u], d[x]);
    }
}

int main() {
    int count = 0;
    while(scanf(" %d %d", &n, &m) && n) {
        if (count) {
            memset(seen, 0, sizeof(seen));
            memset(d, 0, sizeof(d));
            memset(low, 0, sizeof(low));
            for (auto& x : adj)
                x.clear();
        }
        for (int i = 0; i < m; i++) {
            int u, v;
            scanf(" %d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        t = 0;
        hasbridge = false;
        dfs(1, 1);
        printf("%s\n", hasbridge ? "N" : "S");
        count++;
    }
    return 0;
}

