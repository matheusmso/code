#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e5+7;
struct edge {
    int u, v, w;
    edge(int _u, int _v, int _w) : u(_u), v(_v), w(_w) {}
    edge() {}
};
edge g[N];
int n, m, p[N], s[N], ans;
bool comp(edge a, edge b) {
    return a.w < b.w;
}

int find(int v) {
    if (p[v] == v) return v;
    return p[v] = find(p[v]);
}

void join(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return;
    if (s[u] > s[v]) {
        p[v] = u;
        s[u] += s[v];
    }
    else {
        p[u] = v;
        s[v] += s[u];
    }
}

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        p[i] = i;
        s[i] = 1;
    }
    for (int i = 0; i < m; i++) {
        int u, v, w;
        scanf(" %d %d %d", &u, &v, &w);
        g[i] = edge(u, v, w);
    }
    sort(g, g+m, comp);
    for (int i = 0; i < m; i++) {
        if (find(g[i].u) == find(g[i].v)) continue;
        join(g[i].u, g[i].v);
        ans += g[i].w;
    }
    printf("%d\n", ans);
    return 0;
}


