#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, m, v[N];
vector<pair<int, int>> f;
vector<int> adj[N];
bool seen[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf(" %d", v+i);
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
        f.push_back({v[i], i});
    int ans = 0;
    sort(f.begin(), f.end(), greater<pair<int, int>>());
    for (int i = 0; i < n; i++) {
        for (int k : adj[f[i].second])
            if (!seen[k])
                ans += v[k];
        seen[f[i].second] = true;
    }
    printf("%d\n", ans);
    return 0;
}

    
