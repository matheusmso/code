#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e5+7;
const int L = 20;
vector<pair<int, lint>> adj[N];
vector<int> adj2[N];
int n, m, ok[N], parent[N], la[N][L], de[N];
lint dist[N], ma[N][L];
pair<pair<int, int>, lint> q[N];

void dfs(int v) {
    la[v][0] = parent[v];
    for (int i = 1; i < L; i++)
        la[v][i] = la[la[v][i-1]][i-1];
    for (int u : adj2[v]) {
        de[u] = de[v] + 1;
        dfs(u);
    }
}

lint lca(int u, int v) {
    if (de[u] > de[v]) swap (u, v);
    lint ans = 0;
    for (int i = L-1; i >= 0; i--) {
        if (de[la[v][i]] >= de[u]) {
            ans = max(ans, ma[v][i]);
            v = la[v][i];
        }
    }
    if (u == v) return ans;
    for (int i = L-1; i >= 0; i--) {
        if (la[v][i] != la[u][i]) {
            ans = max({ans, ma[v][i], ma[u][i]});
            v = la[v][i];
            u = la[u][i];
        }
    }
    return max({ans, ma[v][0], ma[u][0]});
}

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int u, v;
        lint w;
        scanf(" %d %d %lld", &u, &v, &w);
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
        q[i] = {{u, v}, w};
    }
    for (int i = 2; i <= n; i++)
        dist[i] = LINF;
    priority_queue<pair<lint, int>> pq;
    pq.push({dist[1], 1});
    while (!pq.empty()) {
        pair<lint, int> p = pq.top();
        pq.pop();
        int v = p.second;
        lint d = -p.first;
        if (d > dist[v]) continue;
        for (pair<int, lint> pp : adj[v]) {
            int u = pp.first;
            if (ok[u]) continue;
            lint cvu = pp.second;
            if (cvu < dist[u]) {
                parent[u] = v;
                dist[u] = cvu;
                pq.push({-dist[u], u});
            }
        }
        ok[v] = 1;
    }
    lint ans = 0;
    for (int i = 1; i <= n; i++)
        ans += dist[i];
    parent[1] = 1;
    for (int i = 2; i <= n; i++)
        adj2[parent[i]].push_back(i);
    dfs(1);
    for (int i = 1; i <= n; i++)
        debug("%d %d\n", i, de[i]);
    for (int u = 1; u <= n; u++) {
        for (pair<int, lint> p : adj[u]) {
            int v = p.first;
            lint cuv = p.second;
            if (parent[v] == u)
                ma[v][0] = max(ma[v][0], cuv);
        }
    }
    for (int j = 1; j < L; j++)
        for (int i = 1; i <= n; i++)
            ma[i][j] = max(ma[i][j-1], ma[la[i][j-1]][j-1]);
    for (int i = 1; i <= n; i++)
        debug("%d %d\n", i, parent[i]);
    for (int i = 1; i <= n; i++) {
        debug("%d: ", i);
        for (int j = 0; j < 4; j++)
            debug("%d ", la[i][j]);
        debug("\n");
    }
    for (int i = 1; i <= n; i++) {
        debug("%d: ", i);
        for (int j = 0; j < L; j++)
            debug("%lld ", ma[i][j]);
        debug("\n");
    }
    for (int i = 0; i < m; i++) {
        lint aux = q[i].second;
        lint temp = ans + aux;
        lint aaa = lca(q[i].first.first, q[i].first.second);
        temp -= aaa;
        debug("lca %lld\n", aaa);
        printf("%lld\n", temp);
    }
    return 0;
}


