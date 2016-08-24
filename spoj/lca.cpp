#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e3+7;
vector<int> adj[N];
int la[N][20], d[N];

void dfs(int u, int p) {
    la[u][0] = p;
    for (int i = 1; i < 20; i++)
        la[u][i] = la[la[u][i-1]][i-1];
    for (int x : adj[u]) {
        d[x] = d[u]+1;
        dfs(x, u);
    }
}

int lca(int u, int v) {
    if (d[u] > d[v]) swap(u, v);
    for (int i = 19; i >= 0; i--)
        if (d[la[v][i]] >= d[u])
            v = la[v][i];
    if (u == v) return v;
    for (int i = 19; i >= 0; i--) {
        if (la[u][i] != la[v][i]) {
            u = la[u][i];
            v = la[v][i];
        }
    }
    return la[v][0];
}

int main() {
    int t;
    scanf(" %d", &t);
    for (int te = 1; te <= t; te++) {
        int n;
        for (int i = 0; i < N; i++)
            adj[i].clear();
        memset(d, 0, sizeof(d));
        memset(la, 0, sizeof(la));
        scanf(" %d", &n);
        for (int i = 1; i <= n; i++) {
            int m;
            scanf(" %d", &m);
            for (int j = 0; j < m; j++) {
                int x;
                scanf(" %d", &x);
                adj[i].push_back(x);
            }
        }
        dfs(1, 1);
        int q;
        scanf(" %d", &q);
        printf("Case %d:\n", te);
        while (q--) {
            int u, v;
            scanf(" %d %d", &u, &v);
            printf("%d\n", lca(u, v));
        }
    }
    return 0;
}
