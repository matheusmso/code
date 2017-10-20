#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 3e2+7;
int n, m, c, k, dist[N];
vector<pair<int, int>> adj[N];

int main() {
    while (scanf(" %d %d %d %d", &n, &m, &c, &k) && n) {
        for (int i = 0; i < m; i++) {
            int u, v, w;
            scanf(" %d %d %d", &u, &v, &w);
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        for (int i = 0; i < n; i++)
            dist[i] = INF;
        dist[k] = 0;
        priority_queue<pair<int, int>> pq;
        pq.push({0, k});
        while (!pq.empty()) {
            pair<int, int> p = pq.top();
            pq.pop();
            int v = p.second;
            int d = -p.first;
            if (d > dist[v]) continue;
            for (pair<int, int> pp : adj[v]) {
                int u = pp.first;
                int w = pp.second;
                if (v < c) {
                    if (u < c && u == v+1) {
                        if (dist[v] + w < dist[u]) {
                            dist[u] = dist[v] + w;
                            pq.push({-dist[u], u});
                        }
                    }
                }
                else {
                    if (dist[v] + w < dist[u]) {
                        dist[u] = dist[v] + w;
                        pq.push({-dist[u], u});
                    }
                }
            }
        }
        printf("%d\n", dist[c-1]);
        for (int i = 0; i < N; i++)
            adj[i].clear();
    }
    return 0;
}


