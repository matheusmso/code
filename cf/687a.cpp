#include <bits/stdc++.h>
using namespace std;

const int maxn = (int) 1e5+7;
vector<int> adj[maxn];
int color[maxn];
int ok = 1;

void dfs(int u, int c) {
    color[u] = c;
    for (int v : adj[u]) {
        if (color[v] == -1) dfs(v, c^1);
        else if (color[u] == color[v]) ok = 0;
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int k = 0; k < m; k++) {
        int p, q;
        scanf("%d%d", &p, &q);
        adj[p].push_back(q);
        adj[q].push_back(p);
    }
    memset(color, -1, sizeof(color));
    for (int i = 1; i <= n; i++)
        if (color[i] == -1)
            dfs(i, 0);
    if (!ok)
        printf("-1\n");
    else {
        vector<int> a[2];
        for (int i = 1; i <= n; i++)
            a[color[i]].push_back(i);
        printf("%d\n", a[0].size());
        for (int i : a[0]) printf("%d ", i);
        printf("\n%d\n", a[1].size());
        for (int i : a[1]) printf("%d ", i);
        printf("\n");
    }
    return 0;
}

