#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e4+7;
int n, v[N], d[N], la[N][20], p[N];
vector<int> adj[N], c[N/2];
lint ans;

void dfs(int u, int pu) {
    la[u][0] = p[u] = pu;
    for (int i = 1; i < 20; i++)
        la[u][i] = la[la[u][i-1]][i-1];
    for (int w : adj[u])
        if (w != pu) {
            d[w] = d[u] + 1;
            dfs(w, u);
        }
}

int lca(int u, int w) {
    if (d[u] > d[w]) swap(u, w);
    for (int i = 19; i >= 0; i--)
        if (d[la[w][i]] >= d[u])
            w = la[w][i];
    if (u == w) return u;
    for (int i = 19; i >= 0; i--) 
        if (la[u][i] != la[w][i]) {
            u = la[u][i];
            w = la[w][i];
        }
    return la[u][0];
}

lint dist(int u, int w) {
    return (lint) d[u] + d[w] - (2*d[lca(u, w)]);
}

int main() {
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++)
        scanf(" %d", v+i);
    for (int i = 0; i < n-1; i++) {
        int u, w;
        scanf(" %d %d", &u, &w);
        adj[u].push_back(w);
        adj[w].push_back(u);
    }
    dfs(1, 1);
    for (int i = 1; i <= n; i++) 
        c[v[i]].push_back(i);
    for (int i = 1; i <= n/2; i++) {
        for (int j : c[i])
            debug("%d ", j);
        debug("\n");
    }
    for (int i = 1; i <= n/2; i++) 
        ans += dist(c[i][0], c[i][1]);
    printf("%lld\n", ans);
    return 0;
}


