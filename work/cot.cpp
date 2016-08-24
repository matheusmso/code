#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int la[N][20], d[N], w[N];
vector<int> adj[N];

int main() {
    int n, m;
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf(" %d", &w[i]);
    for (int i = 0; i < n-1; i++) {
        int u, v;
        scanf(" %d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 1);
    for (int i = 0; i < m; i++) {
        int u, v, k;
        scanf(" %d %d %d", &u, &v, &k);
    }
    return 0;
}

