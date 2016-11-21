#include <bits/stdc++.h>
using namespace std;
const int N = (int)4e2+7;

vector<int> adj[N];
int low[N], d[N], n, m, iscutv[N], cutv, seen[N], tim;

void dfs(int u, int p) {
    seen[u] = 1;
    int ns = 0;
    d[u] = low[u] = tim++;
    bool any = false;
    for (int x : adj[u]) {
        if (!seen[x]) {
            dfs(x, u);
            ns++;
            if (low[x] >= d[u]) any = true;
            low[u] = min(low[u], low[x]);
            //if (low[x] > d[u]) isbridge;
        }
        else if (x != p)
            low[u] = min(low[u], d[x]);
    }
    if (u == 1 && ns > 1)
        iscutv[cutv++] = u;
    else if (u != 1 && any)
        iscutv[cutv++] = u;
}

int main() {
    int count = 1;
    while (scanf(" %d %d", &n, &m) && n) {
        if (count > 1) {
            memset(iscutv, 0, sizeof(iscutv));
            memset(d, 0, sizeof(d));
            memset(low, 0, sizeof(low));
            memset(seen, 0, sizeof(seen));
            for (auto& x : adj)
                x.clear();
        }
        for (int i = 0; i < m; i++) {
            int u, v;
            scanf(" %d %d", &u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cutv = tim = 0;
        dfs(1, 1);
        printf("Teste %d\n", count++);
        if (cutv) {
            sort(iscutv, iscutv+cutv);
            for (int i = 0; i < cutv; i++)
                printf("%d ", iscutv[i]);
            printf("\n");
        }
        else
            printf("nenhum\n");
        printf("\n");
    }
    return 0;
}

