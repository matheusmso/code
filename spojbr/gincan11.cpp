#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1007];
int n, m;
int comp[1007];

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
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    memset(comp, -1, sizeof(comp));
    int components = 0;
    for (int i = 1; i <= n; i++) {
        if (comp[i] == -1) {
            comp[i] = ++components;
            dfs(i);
        }
    }
    printf("%d\n", components);
}

