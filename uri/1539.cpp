#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n, c, vis[N];
double dis[N];
vector<pair<int, double>> adj[N];

double dist(pair<int, int> a, pair<int, int> b) {
    int x = a.first - b.first;
    int y = a.second - b.second;
    return sqrt(x*x + y*y);
}

int main() {
    while (scanf(" %d", &n) && n) {
        vector<pair<int, int>> v;
        vector<double> ra;
        for (int i = 0; i < n; i++) {
            int x, y;
            double w;
            scanf(" %d %d %lf", &x, &y, &w);
            v.push_back({x, y});
            ra.push_back(w);
        }
        for (int i = 0; i < v.size(); i++)
            for (int j = 0; j < v.size(); j++) {
                if (i == j) continue;
                double aux = dist(v[i], v[j]);
                if (aux <= ra[i]) { 
                    adj[i+1].push_back({j+1, aux});
                }
            }
        scanf(" %d", &c);
        for (int i = 0; i < c; i++) {
            int s, de;
            scanf(" %d %d", &s, &de);
            for (int i = 1; i <= n; i++)
                dis[i] = DBL_MAX;
            memset(vis, 0, sizeof(vis));
            dis[s] = 0.0;
            priority_queue<pair<double, int>> pq;
            pq.push({0.0, s});
            vis[s] = 1;
            while (!pq.empty()) {
                pair<double, int> p = pq.top();
                pq.pop();
                int v = p.second;
                double d = -p.first;
                if (d > dis[v]) continue;
                for (pair<int, double> pp : adj[v]) {
                    int u = pp.first;
                    double cvu = pp.second;
                    if (dis[v] + cvu < dis[u]) {
                        dis[u] = dis[v] + cvu;
                        pq.push({-dis[u], u});
                        vis[u] = 1;
                    }
                }
            }
            if (vis[de] == 0)
                printf("-1\n");
            else
                printf("%d\n", (int)dis[de]);
        }
        for (int i = 1; i <= n; i++)
            adj[i].clear();
    }
    return 0;
}


