#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
vector<int> adj[N];
int n, m, v[N], dist[N], l[N], lc[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        int x;
        scanf(" %d", &x);
        adj[x].push_back(i);
    }
    for (int i = 0; i < m; i++) {
        int x;
        scanf(" %d", &x);
        v[x]++;
    }
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        for (int k : adj[t]) {
            dist[k] = dist[t] + 1;
            q.push(k);
        }
    }
    int maxl = 0;
    for (int i = 1; i <= n; i++) {
        maxl = max(maxl, dist[i]);
        l[dist[i]]++;
        if (v[i])
            lc[dist[i]]++;
    }
    for (int i = 1; i <= n; i++)
        debug("%d %d\n", i, dist[i]);
    for (int i = 1; i <= maxl; i++) 
        printf("%.2lf ", 100.0*lc[i]/l[i]);
    printf("\n");
    return 0;
}


