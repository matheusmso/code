#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
vector<int> adj[N];
set<int> s[N];
int n, a[N], ans[N], t[N];

int dfs(int v, int p) {
    t[v] = __gcd(a[v], t[p]);
    for (int i : s[p])
        s[v].insert(__gcd(i, a[v]));
    s[v].insert(t[p]);
    ans[v] = *(s[v].rbegin());
    for (int i : adj[v]) {
        if (i == p) continue;
        dfs(i, v);
    }
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", a+i+1);
    for (int i = 0; i < n-1; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    s[1].insert(0);
    dfs(1, 1);
    for (int i = 1; i <= n; i++)
        printf("%d ", ans[i]);
    printf("\n");
    return 0;
}

