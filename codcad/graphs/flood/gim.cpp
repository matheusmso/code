#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int seen[N], n, m;
vector<int> adj[N];

void dfs(int v) {
    if (seen[v] == 1) return;
    seen[v] = 1;
    for (int i : adj[v])
        dfs(i);
}

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int comp = 0;
    for (int i = 1; i <= n; i++) {
        if (seen[i] == 0) {
            dfs(i);
            comp++;
        }
    }
    printf("%d\n", comp);
    return 0;
}


