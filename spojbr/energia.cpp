#include <bits/stdc++.h>
using namespace std;

int e, l;
int comp[107];

int dfs(vector<int> graph[], int v) {
    for (int i = 0; i < graph[v].size(); i++) {
        int k = graph[v][i];
        if (comp[k] == -1) {
            comp[k] = comp[v];
            dfs(graph, k);
        }
    }
}

int main() {
    int trial = 1;
    while (scanf("%d %d", &e, &l) && e != 0 && l != 0) {
        vector<int> graph[107];
        for (int i = 0; i < l; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        memset(comp, -1, sizeof(comp));
        int component = 0;
        for (int i = 1; i <= e; i++) {
            if (comp[i] == -1) {
                comp[i] = ++component;
                dfs(graph, i);
            }
        }
        printf("Teste %d\n", trial++);
        if (component != 1)
            printf("falha\n\n");
        else
            printf("normal\n\n");
    }
    return 0;
}

