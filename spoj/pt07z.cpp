#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e5+7;
vector<int> adj[N];
int f1, n1, used[N];

int dfs(int x, int d) {
    used[x] = 1;
    if (d > f1) {
        f1 = d;
        n1 = x;
    }
    for (int i : adj[x])
        if (!used[i])
            dfs(i, d+1);
}

int main() {
    int n;
    scanf(" %d", &n);
    for (int i = 0; i < n-1; i++) {
        int u, v;
        scanf(" %d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    f1 = n1 = 0;
    dfs(1, 0);
    int from = n1;
    f1 = n1 = 0;
    memset(used, 0, sizeof(used));
    dfs(from, 0);
    printf("%d\n", f1);
    return 0;
}

