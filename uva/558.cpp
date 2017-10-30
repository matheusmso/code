#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
vector<pair<int, int>> adj[N];
int c, n, m, dist[N];

int main() {
    scanf(" %d", &c);
    while (c--) {
        scanf(" %d %d", &n, &m);
        for (int i = 0; i < m; i++) {
            int x, y, w;
            scanf(" %d %d %d", &x, &y, &w);
            adj[x].push_back({y, w});
        }
        dist[0] = 0;
        for (int i = 1; i < n; i++)
            dist[i] = INF;
        for (int j = 0; j < n-1; j++) {
            for (int u = 0; u < n; u++) {
                for (pair<int, int> p : adj[u]) {
                    int v = p.first;
                    int cuv = p.second;
                    dist[v] = min(dist[v], dist[u] + cuv);
                }
            }
        }
        bool f = true;
        for (int u = 0; u < n && f; u++) {
            for (pair<int, int> p : adj[u]) {
                int v = p.first;
                int cuv = p.second;
                if (dist[u] + cuv < dist[v]) {
                    printf("possible\n");
                    f = false;
                    break;
                }
            }
        }
        if (f)
            printf("not possible\n");
        for (int i = 0; i < n; i++)
            adj[i].clear();
    }
    return 0;
}


