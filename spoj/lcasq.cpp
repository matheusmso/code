#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e4+7;
int la[N][20], d[N];
vector<int> adj[N];

void dfs(int u, int p) {
    la[u][0] = p;
    for (int i = 1; i < 20; i++)
        la[u][i] = la[la[u][i-1]][i-1];
    for (int x : adj[u]) {
        if (x != p) {
            d[x] = d[u]+1;
            dfs(x, u);
        }
    }
}

int lca(int u, int v) {
    if (d[u] > d[v]) swap(u,v);
    for (int i = 19; i >= 0; i--) {
        if (d[la[v][i]] >= d[u])
            v = la[v][i];
    }
    if (u == v) return v;
    for (int i = 19; i >= 0; i--) {
        if (la[v][i] != la[u][i]) {
            v = la[v][i];
            u = la[u][i];
        }
    }
    return la[v][0];
}

int main() {
    int n;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int s;
        scanf(" %d", &s);
        for (int j = 0; j < s; j++) {
            int x;
            scanf(" %d", &x);
            adj[i].push_back(x);
        }
    }
    dfs(0, 0);
    int q;
    scanf(" %d", &q);
    while (q--) {
        int u, v;
        scanf(" %d %d", &u, &v);
        printf("%d\n", lca(u,v));
    }
    return 0;
}

