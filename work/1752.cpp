#include <bits/stdc++.h>
using namespace std;
const int N = (int)3e4+7;
int la[N][20], d[N];
vector<int> adj[N];
vector<int> dist[N];

void dfs(int u, int p) {
    la[u][0] = p;
    for (int i = 1; i < 20; i++)
        la[u][i] = la[la[u][i-1]][i-1];
    for (int x : adj[u]) {
        if (x != p) {
            d[x] = d[u]+1;
            dist[d[x]].push_back(x);
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

int main() {
    int n, q;
    scanf(" %d %d", &n, &q);
    for (int i = 0; i < n-1; i++) {
        int u, v;
        scanf(" %d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 1);
    while (q--) {
        int v, de;
        scanf(" %d %d", &v, &de);
        if (de > d[v]) {
            de -= d[v];
            int ans = 0;
            for (int x : dist[de]) {
                if (d[x]+d[v]-2*d[lca(x, v)] == de+d[v]) {
                    ans = x;
                    break;
                }
            }
            printf("%d\n", ans);
        }
        else {
            for (int i = 19; i >= 0; i--) {
                if (1<<i <= de) {
                    de -= 1<<i;
                    v = la[v][i];
                }
            }
            printf("%d\n", v);
        }
        printf("---\n");
    }
    return 0;
}
