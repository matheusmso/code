#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
int n, m, dist[N];
vector<int> adj[N], w[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int s, t, b;
        scanf(" %d %d %d", &s, &t, &b);
        adj[s].push_back(t);
        w[s].push_back(b);
        adj[t].push_back(s);
        w[t].push_back(b);
    }
    for (int i = 1; i < n + 2; i++)
        dist[i] = INF;
    priority_queue<pair<int, int>> pq;
    pq.push({0, 0});
    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        int d = -p.first;
        int v = p.second;
        if (d > dist[v]) continue;
        for (int i = 0; i < (int)adj[v].size(); i++) {
            int u = adj[v][i];
            int cvu = w[v][i];
            if (dist[v] + cvu < dist[u]) {
                dist[u] = dist[v] + cvu;
                pq.push({-dist[u], u});
            }
        }
    }
    printf("%d\n", dist[n+1]);
    return 0;
}


