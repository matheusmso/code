#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
int te, n, m, dist[N];
vector<pair<int, int>> adj[N];

void dijkstra(int s) {
    for (int i = 0; i <= n; i++)
        dist[i] = INF;
    dist[s] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, s});
    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        int d = -p.first;
        int v = p.second;
        if (d > dist[v]) continue;
        for (pair<int, int> pp : adj[v]) {
            int u = pp.first;
            int cvu = pp.second;
            if (dist[v] + cvu < dist[u]) {
                dist[u] = dist[v] + cvu;
                pq.push({-dist[u], u});
            }
        }
    }
}

int main() {
    scanf(" %d", &te);
    for (int tt = 0; tt < te; tt++) {
        scanf(" %d %d", &n, &m);
        for (int i = 0; i < m; i++) {
            int x, y, w;
            scanf(" %d %d %d", &x, &y, &w);
            adj[x].push_back({y, w});
        }
        int s, d;
        scanf(" %d %d", &s, &d);
        dijkstra(s);
        if (dist[d] == INF)
            printf("NO\n");
        else
            printf("%d\n", dist[d]);
        if (tt != te-1)
            for (int i = 0; i <= n; i++)
                adj[i].clear();
    }
    return 0;
}


