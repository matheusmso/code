#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int g[N][N], n, dist[N*N];
vector<int> adj[N*N];
vector<int> weights[N*N];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf(" %d", &g[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int o = 0; o < 4; o++) {
                int x = i + dx[o];
                int y = j + dy[o];
                if (x < 0 || x >= n || y < 0 || y >= n) continue;
                adj[i*n + j].push_back(x*n + y);
                weights[i*n + j].push_back(g[x][y]);
            }
    priority_queue<pair<int, int>> pq;
    for (int i = 1; i < n*n; i++)
        dist[i] = INF;
    pq.push({dist[0], 0});
    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        int d = -p.first;
        int v = p.second;
        if (d > dist[v]) continue;
        for (int i = 0; i < (int)adj[v].size(); i++) {
            int w = adj[v][i];
            int cvw = weights[v][i];
            if (dist[v] + cvw < dist[w]) {
                dist[w] = dist[v] + cvw;
                pq.push({-dist[w], w});
            }
        }
    }
    printf("%d\n", dist[n*n-1]);
    return 0;
}

