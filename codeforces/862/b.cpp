#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
set<int> adj[N];
int color[N], seen[N], tc[2], n;

void dfs(int v, int p) {
    for (int k : adj[v])
        if (k != p) {
            color[k] = 1 - color[v];
            dfs(k, v);
        }
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n-1; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        adj[x].insert(y);
        adj[y].insert(x);
    }
    color[1] = 0;
    dfs(1, 1);
    int c1 = 0;
    int c2 = 0;
    for (int i = 1; i <= n; i++) {
        tc[color[i]]++;
        //printf("%d %d\n", i, color[i]);
    }
    long long ans = (long long)tc[0]*tc[1]-(n-1);
    printf("%lld\n", ans);
    return 0;
}



