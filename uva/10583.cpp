#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e4+7;
int n, m, p[N], s[N];

int find(int v) {
    if (p[v] == v) return v;
    return p[v] = find(p[v]);
}

void join(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return;
    n--;
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
    int tt = 1;
    while (scanf(" %d %d", &n, &m) && n) {
        for (int i = 1; i <= n; i++) {
            p[i] = i;
            s[i] = 1;
        }
        for (int i = 0; i < m; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            join(x, y);
        }
        printf("Case %d: %d\n", tt++, n);
    }
    return 0;
}


