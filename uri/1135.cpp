#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int n, la[N][20], d[N], q;
vector<pair<int, int>> adj[N];
lint cost[N];

void dfs(int v, int p) {
    la[v][0] = p;
    for (int i = 1; i < 20; i++)
        la[v][i] = la[la[v][i-1]][i-1];
    for (pair<int, lint> pp : adj[v]) {
        int u = pp.first;
        lint cvu = pp.second;
        if (u != p) {
            d[u] = d[v] + 1;
            cost[u] = cost[v] + cvu;
            dfs(u, v);
        }
    }
}

int lca(int u, int v) {
    if (d[u] > d[v]) swap(u, v);
    for (int i = 19; i >= 0; i--)
        if (d[la[v][i]] >= d[u])
            v = la[v][i];
    if (u == v) return v;
    for (int i = 19; i >= 0; i--)
        if (la[u][i] != la[v][i]) {
            u = la[u][i];
            v = la[v][i];
        }
    return la[v][0];
}

lint dist(int u, int v) {
    return cost[u] + cost[v] - 2*cost[lca(u, v)];
}

int main() {
    while (scanf(" %d", &n) && n) {
        for (int i = 1; i < n; i++) {
            int u;
            lint w;
            scanf(" %d %lld", &u, &w);
            adj[i].push_back({u, w});
            adj[u].push_back({i, w});
        }
        dfs(0, 0);
        scanf(" %d", &q);
        for (int i = 0; i < q; i++) {
            int u, v;
            scanf(" %d %d", &u, &v);
            printf("%lld%c", dist(u, v), " \n"[i == q-1]);
        }
        for (int i = 0; i < n; i++)
            adj[i].clear();
    }
    return 0;
}


