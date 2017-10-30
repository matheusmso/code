#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n, t, dist[N];
vector<pair<int, int>> adj[N];

int solve(int s) {
    int ans = INF;
    dist[s] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({dist[s], s});
    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        int v = p.second;
        int d = p.first;
        debug("%d %d\n", v, d);
        if (d > dist[v]) continue;
        for (pair<int, int> pp : adj[v]) {
            int u = pp.first;
            int cvu = pp.second;
            if (dist[v] + cvu < dist[u]) {
                dist[u] = dist[v] + cvu;
                ans = min(ans, dist[u]);
                pq.push({dist[u], u});
            }
        }
    }
    return -ans;
}

int main() {
    while (scanf(" %d", &n) && n) {
        int s;
        scanf(" %d", &s);
        int x, y;
        while (scanf(" %d %d", &x, &y) && x)
            adj[x].push_back({y, -1});
        memset(dist, 0, sizeof(dist));
        int m = solve(s);
        debug("%d\n", m);
        for (int i = 1; i <= n; i++) 
            if (dist[i] == -m) {
                printf("Case %d: The longest path from %d has length %d, finishing at %d.\n\n", ++t, s, m, i);
                break;
            }
        for (int i = 1; i <=n; i++)
            adj[i].clear();
    }
    return 0;
}


