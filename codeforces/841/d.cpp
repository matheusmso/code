#include <bits/stdc++.h>
using namespace std;

const int N = 3e5+7;
vector<pair<int, int>> adj[N];
set<int> s;
int d[N], cd[3], n, m, seen[N];

int dfs(int v, int p) {
    seen[v] = 1;
    int cnt = 0;
    for (pair<int, int> k : adj[v])
        if (seen[k.first] == 0)
            cnt += dfs(k.first, k.second);
    if (cnt == 0) { //leaf
        if (d[v] == 0) 
            return 0;
        else {
            s.insert(p);
            return 1;
        }
    }
    else if (cnt%2 == d[v])
        return 0;
    else {
        s.insert(p);
        return 1;
    }
}

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf(" %d", d+i);
        if (d[i] == -1)
            cd[2]++;
        else
            cd[d[i]]++;
    }
    if (cd[1] % 2 == 1 && cd[2] == 0) {
        printf("-1\n");
        return 0;
    }
    if (cd[1] % 2 == 1) {
        for(int i = 1; i <= n; i++)
            if (d[i] == -1) {
                d[i] = 1;
                break;
            }
    }
    for (int i = 1; i <= n; i++)
        if (d[i] == -1)
            d[i] = 0;
    for (int i = 1; i <= m; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        adj[x].push_back({y, i});
        adj[y].push_back({x, i});
    }
    dfs(1, 0);
    printf("%d\n", s.size());
    for (int p : s)
        printf("%d\n", p);
    return 0;
}

