#include <bits/stdc++.h>
using namespace std;

int n, m, comp[10007];
vector<int> graph[10007];

void dfs(int v) {
    for (int i = 0; i < graph[v].size(); i++) {
        int k = graph[v][i];
        if (comp[k] == -1) {
            comp[k] = comp[v];
            dfs(k);
        }
    }
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int components = 0;
    memset(comp, -1, sizeof(comp));
    for (int i = 1; i <= n; i++) {
        if (comp[i] == -1) {
            comp[i] = ++components;
            dfs(i);
        }
    }
    if (components == 1 && n-1 == m)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}


