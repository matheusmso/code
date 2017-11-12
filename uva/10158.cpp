#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e5+4;
int n, p[N], s[N];

int find(int v) {
    if (p[v] == v) return v;
    return p[v] = find(p[v]);
}

void join(int v, int u) {
    v = find(v);
    u = find(u);
    if (u == v) return;
    if (s[v] > s[u]) {
        p[u] = v;
        s[v] += s[u];
    }
    else {
        p[v] = u;
        s[u] += s[v];
    }
}

int main() {
    scanf(" %d", &n);
        for (int i = 0; i < 2*n; i++) {
            p[i] = i;
            s[i] = 1;
        }
    int c, x, y;
    while (scanf(" %d %d %d", &c, &x, &y)) {
        if (x == 0 && y == 0 && c == 0) break;
        if (c == 1) {
            if (find(x) == find(y+n) || find(x+n) == find(y))
                printf("-1\n");
            else {
                join(x, y);
                join(x+n, y+n);
            }
        }
        else if (c == 2) {
            if (find(x) == find(y) || find(x+n) == find(y+n))
                printf("-1\n");
            else {
                join(x, y+n);
                join(x+n, y);
            }
        }
        else if (c == 3)
            printf("%d\n", (find(x) == find(y) || find(x+n) == find(y+n)));
        else
            printf("%d\n", (find(x) == find(y+n) || find(x+n) == find(y)));
    }
    return 0;
}


