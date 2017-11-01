#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n, p, dist[N], vis[N];
vector<int> adj[N];

int main() {
    while (scanf(" %d", &n) && n) {
        for (int i = n-1; i >= 0; i--)
            for (int j = 0; j < n; j++) 
                for (int o = 0; o < 4; o++) {
                    int x;
                    scanf(" %d", &x);
                    if (x == 0) continue;
                    if (o == 0) 
                        adj[n*i+j].push_back(n*(i+1)+j);
                    else if (o == 1) 
                        adj[n*i+j].push_back(n*(i-1)+j);
                    else if (o == 2) 
                        adj[n*i+j].push_back(n*i+j-1);
                    else 
                        adj[n*i+j].push_back(n*i+j+1);
                }
        scanf(" %d", &p);
        for (int i = 0; i < p; i++) {
            memset(vis, 0, sizeof(vis));
            int a, b, x, y, o, d;
            scanf(" %d %d %d %d", &b, &a, &y, &x);
            o = n*a+b;
            d = n*x+y;
            dist[o] = 0;
            vis[o] = 1;
            queue<int> q;
            q.push(o);
            while (!q.empty()) {
                int v = q.front();
                q.pop();
                if (v == d) break;
                for (int j : adj[v])
                   if (vis[j] == 0) {
                      dist[j] = dist[v] + 1; 
                      q.push(j);
                      vis[j] = 1;
                   }
            }
            if (vis[d] == 0)
                printf("Impossible\n");
            else printf("%d\n", dist[d]);
        }
        for (int i = 0; i < n*n; i++)
            adj[i].clear();
        printf("\n");
    }
    return 0;
}


