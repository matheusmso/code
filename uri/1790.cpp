#include <bits/stdc++.h>
using namespace std;

const int N = 57;
vector<int> adj[N];
int c, p, cnt, pa[N], pre[N], low[N], br;

void dfs(int v) {
    low[v] = pre[v] = cnt++;
    for (int k : adj[v]) {
        if (pre[k] == -1) {
            pa[k] = v;
            dfs(k);
            low[v] = min(low[v], low[k]);
            if (low[k] > pre[v])
                br++;
        }
        else if (k != pa[v])
            low[v] = min(low[v], pre[k]);
    }
}

int main() {
    while (scanf(" %d %d", &c, &p) != EOF) {
        memset(pre, -1, sizeof(pre));
        br = cnt = 0;
        for (int i = 0; i < N; i++)
            adj[i].clear();
        while (p--) {
            int x, y;
            scanf(" %d %d", &x, &y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for (int i = 1; i <= c; i++)
            if (pre[i] == -1) {
                pa[i] = i;
                dfs(i);
            }
        printf("%d\n", br);
    }
    return 0;
}

