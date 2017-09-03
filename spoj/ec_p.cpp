#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e3;
vector<int> adj[N];
int te, n, m, pre[N], low[N], p[N], cnt;
 
void dfs(int v, set<pair<int, int>> &s) {
    low[v] = pre[v] = cnt++;
    for (int k : adj[v]) {
        if (pre[k] == -1) {
            p[k] = v;
            dfs(k, s);
            low[v] = min(low[k], low[v]);
            if (low[k] > pre[v])
                s.insert({min(v, k), max(v, k)});
        }
        else if (k != p[v])
            low[v] = min(low[v], pre[k]);
    }
}
 
int main() {
    scanf(" %d", &te);
    for (int t = 1; t <= te; t++) {
        set<pair<int, int>> s;
        for (int i = 0; i < N; i++)
            adj[i].clear();
        memset(pre, -1, sizeof(pre));
        cnt = 0;
        scanf(" %d %d", &n, &m);
        for (int i = 0; i < m; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
            if (pre[i] == -1) {
                p[i] = i;
                dfs(i, s);
            }
        printf("Caso #%d\n", t);
        if (s.size() == 0)
            printf("Sin bloqueos\n");
        else {
            printf("%d\n", s.size());
            for (pair<int, int> p : s)
                printf("%d %d\n", p.first, p.second);
        }
    }
    return 0;
}

