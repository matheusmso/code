#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
struct edge {
    int u, v, w;
    edge(int _u, int _v, int _w) : u(_u), v(_v), w(_w) {}
    edge() {}
};
edge g1[N], g2[N];
int n, m1, m2, ans, p[N], s[N];

bool comp(edge a, edge b) {
    return a.w < b.w;
}

int find(int v) {
    if (v == p[v]) return v;
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
    scanf(" %d %d %d", &n, &m1, &m2);
    for (int i = 0; i < m1; i++) {
        int u, v, w;
        scanf(" %d %d %d", &u, &v, &w);
        g1[i] = edge(u, v, w);
    }
    for (int i = 0; i < m2; i++) {
        int u, v, w;
        scanf(" %d %d %d", &u, &v, &w);
        g2[i] = edge(u, v, w);
    }
    for (int i = 1; i <= n; i++) {
        p[i] = i;
        s[i] = 1;
    }
    sort(g1, g1 + m1, comp);
    sort(g2, g2 + m2, comp);
    for (int i = 0; i < m1; i++) {
        if (find(g1[i].u) == find(g1[i].v)) continue;
        join(g1[i].u, g1[i].v);
        ans += g1[i].w;
    }
    for (int i = 0; i < m2; i++) {
        if (find(g2[i].u) == find(g2[i].v)) continue;
        join(g2[i].u, g2[i].v);
        ans += g2[i].w;
    }
    printf("%d\n", ans);
    return 0;
}


