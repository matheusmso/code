#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
vector<pair<int, int>> adj[N];
int n, m, dist[N], ok[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        scanf(" %d %d %d", &u, &v, &w);
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    for (int i = 1; i < n; i++)
        dist[i] = INF;
    priority_queue<pair<int, int>> pq;
    pq.push({dist[0], 0});
    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        int v = p.second;
        int d = -p.first;
        if (d > dist[v]) continue;
        for (pair<int, int> pp : adj[v]) {
            int u = pp.first;
            int cvu = pp.second;
            if (ok[u] == 1) continue;
            if (cvu < dist[u]) {
                dist[u] = cvu;
                pq.push({-dist[u], u});
            }
        }
        ok[v] = 1;
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        debug("%d %d\n", i, dist[i]);
        ans += dist[i];
    }
    printf("%d\n", ans);
    return 0;
}


