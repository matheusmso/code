#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e5+7;
vector<int> adj[N];
int n, m, la[N][20], d[N], root;

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

int dist(int u, int v) {
    return d[u]+d[v]-2*d[lca(u, v)];
}

int walk(int u, int v, int k) {
    int l = lca(u, v);
    int di = dist(u, l);
    if (k > di) {
        k -= di;
        k = dist(v, l)-k;
        swap(u, v);
    }
    for (int i = 19; i >= 0 && k > 0; i--) {
        if (1<<i <= k) {
            u = la[u][i];
            k -= 1<<i;
        }
    }
    return u;
}

int solve(int u, int v) {
    int du = dist(u, root);
    int dv = dist(v, root);
    if (du > dv) {
        swap(u, v);
        swap(du, dv);
    }
    int t = walk(v, root, dv-du);
    return walk(u, t, dist(u, t)/2);
}

int main() {
    freopen("dynamic.in", "r", stdin);
    freopen("dynamic.out", "w", stdout);
    while (scanf(" %d", &n) && n != 0) {
        memset(la, 0, sizeof(la));
        memset(d, 0, sizeof(d));
        for (int i = 0; i < N; i++)
            adj[i].clear();
        root = 1;
        for (int i = 0; i < n-1; i++) {
            int u, v;
            scanf(" %d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        scanf(" %d", &m);
        dfs(1, 1);
        while (m--) {
            char c;
            int x, y;
            scanf(" %c", &c);
            if (c == '?') {
                scanf(" %d %d", &x, &y);
                printf("%d\n", solve(x, y));
            }
            else
                scanf(" %d", &root);
        }
    }
    return 0;
}
