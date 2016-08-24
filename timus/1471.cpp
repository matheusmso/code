#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int la[N][20], d[N], cost[N];
map<pair<int, int>, int> ma;
vector<int> adj[N];
void dfs(int u, int p) {
    la[u][0] = p;
    for (int i = 1; i < 20; i++)
        la[u][i] = la[la[u][i-1]][i-1];
    for (int x : adj[u]) {
        if (x != p) {
            cost[x] = cost[u]+ma[make_pair(x, u)];
            d[x] = d[u]+1;
            dfs(x, u);
        }
    }
}

int lca(int u, int v) {
    if(d[u] > d[v]) swap(u, v);
    for (int i = 19; i >= 0; i--)
        if (d[la[v][i]] >= d[u])
            v = la[v][i];
    if (u == v) return v;
    for (int i = 19; i >= 0; i--) {
        if (la[u][i] != la[v][i]) {
           v = la[v][i];
           u = la[u][i];
        }
    }
    return la[v][0];
}

int main() {
    int n;
    scanf(" %d", &n);
    for (int i = 0; i < n-1; i++) {
        int u, v, w;
        scanf(" %d %d %d", &u, &v, &w);
        adj[u].push_back(v);
        adj[v].push_back(u);
        ma[make_pair(u, v)] = w;
        ma[make_pair(v, u)] = w;
    }
    dfs(0, 0);
    int q;
    scanf(" %d", &q);
    while (q--) {
        int a, b;
        scanf(" %d %d", &a, &b);
        printf("%d\n", cost[a]+cost[b]-2*cost[lca(a, b)]);
    }
    return 0;
}
