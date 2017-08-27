#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, m, d[N], seen[N];
vector<int> adj[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf(" %d %d", &a, &b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        if (adj[i].size() == 2) {
            int a = adj[i][0];
            int b = adj[i][1];
            for (int k : adj[a])
                if (k == b) {
                    printf("%d %d %d\n", i, a, k);
                    return 0;
                }
            for (int k : adj[b])
                if (k == a) {
                    printf("%d %d %d\n", i, b, k);
                    return 0;
                }
        }
        else if (adj[i].size() >= 3) {
            int a = adj[i][0];
            int b = adj[i][1];
            int c = adj[i][2];
            for (int k : adj[a])
                if (k == b || k == c) {
                    printf("%d %d %d\n", i, a, k);
                    return 0;
                }
            for (int k : adj[b])
                if (k == a || k == c) {
                    printf("%d %d %d\n", i, b, k);
                    return 0;
                }
            for (int k : adj[c])
                if (k == a || k == b) {
                    printf("%d %d %d\n", i, c, k);
                    return 0;
                }
            printf("%d %d %d\n", adj[i][0], adj[i][1], adj[i][2]);
            return 0;
        }
    }
    if (m%3 == 0) {
        int k = m/3;
        queue<pair<int, int>> q;
        vector<int> s;
        q.push({1, 0});
        seen[1] = 1;
        while (!q.empty()) {
            pair<int, int> p = q.front();
            q.pop();
            if (p.second == k) {
                s.push_back(p.first);
                continue;
            }
            for (int j : adj[p.first])
                if (seen[j] == 0) {
                    seen[j] = 1;
                    q.push({j, p.second+1});
                }
        }
        printf("1 %d %d\n", s[0], s[1]);
        return 0;
    }
    printf("-1\n");
    return 0;
}


