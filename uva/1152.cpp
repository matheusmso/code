#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e5+7;
int n, m, p[N], s[N], sum;

int find(int v) {
    if (v == p[v]) return v;
    return p[v] = find(p[v]);
}

void join(int v, int u, int k) {
    u = find(u);
    v = find(v);
    if (u == v) return;
    sum -= k;
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
    while (scanf(" %d %d", &n, &m) && n) {
        vector<pair<int, pair<int, int>>> e;
        sum = 0;
        for (int i = 0; i < m; i++) {
            int x, y, z;
            scanf(" %d %d %d", &x, &y, &z);
            e.push_back({z, {x, y}});
            sum += z;
        }
        for (int i = 0; i < n; i++) {
            p[i] = i;
            s[i] = 1;
        }
        sort(e.begin(), e.end());
        for (int i = 0; i < m; i++) {
            int x = e[i].second.first;
            int y = e[i].second.second;
            join(x, y, e[i].first);
        }
        printf("%d\n", sum);
    }
    return 0;
}


