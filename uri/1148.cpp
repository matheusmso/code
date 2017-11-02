#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e2+7;
int n, e, dist[N], k, pre[N], low[N], sc[N], tin, cmp;
vector<pair<int, int>> adj[N];
bool in_stack[N];
stack<int> st;

void dfs(int u) {
    pre[u] = low[u] = tin++;
    st.push(u);
    in_stack[u] = 1;
    for (pair<int, int> p : adj[u]) {
        int v = p.first;
        if (pre[v] == -1) {
            dfs(v);
            low[u] = min(low[u], low[v]);
        }
        if (in_stack[v])
            low[u] = min(low[u], pre[v]);
    }
    if (pre[u] == low[u]) {
        int vv;
        do {
            vv = st.top();
            st.pop();
            in_stack[vv] = 0;
            sc[vv] = cmp;
        } while (vv != u);
        cmp++;
    }
}

void tarjan() {
    memset(pre, -1, sizeof(pre));
    for (int i = 1; i <= n; i++)
        if (pre[i] == -1)
            dfs(i);
}

void dijkstra(int s) {
    for (int i = 1; i <= n; i++)
        dist[i] = INF;
    dist[s] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({0, s});
    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        int v = p.second;
        int d = -p.first;
        if (d > dist[v]) continue;
        for (pair<int, int> pp : adj[v]) {
            int u = pp.first;
            int cvu = pp.second;
            if (dist[v] + (sc[v] != sc[u])*cvu < dist[u]) {
                dist[u] = dist[v] + (sc[v] != sc[u])*cvu;
                pq.push({-dist[u], u});
            }
        }
    }
}

int main() {
    while (scanf(" %d %d", &n, &e) && n) {
        for (int i = 0; i < e; i++) {
            int x, y, w;
            scanf(" %d %d %d", &x, &y, &w);
            adj[x].push_back({y, w});
        }
        tarjan();
        scanf(" %d", &k);
        for (int i = 0; i < k; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            dijkstra(x);
            if (dist[y] == INF)
                printf("Nao e possivel entregar a carta\n");
            else 
                printf("%d\n", dist[y]);
        }
        for (int i = 1; i <= n; i++)
            adj[i].clear();
        printf("\n");
    }
    return 0;
}


