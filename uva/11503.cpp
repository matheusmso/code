#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e5+7;
int t, n, m, p[N], sz[N];
char s[27];

int find(int v) {
    if (v == p[v]) return v;
    return p[v] = find(p[v]);
}

void join(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) {
        printf("%d\n", sz[u]);
        return;
    }
    if (sz[u] > sz[v]) {
        p[v] = u;
        sz[u] += sz[v];
        printf("%d\n", sz[u]);
    }
    else {
        p[u] = v;
        sz[v] += sz[u];
        printf("%d\n", sz[v]);
    }
}

int main() {
    scanf(" %d", &t);
    for (int tt = 0; tt < t; tt++) {
        scanf(" %d", &m);
        n = 0;
        map<string, int> mp;
        for (int i = 0; i < 2*m; i++) {
            p[i] = i;
            sz[i] = 1;
        }
        for (int i = 0; i < m; i++) {
            int x, y;
            scanf(" %s", s);
            if (mp.find(string(s, strlen(s))) == mp.end()) {
                x = n;
                mp[s] = n++;
            }
            else x = mp[s];
            scanf(" %s", s);
            if (mp.find(string(s, strlen(s))) == mp.end()) {
                y = n;
                mp[s] = n++;
            }
            else y = mp[s];
            join(x, y);
        }
    }
    return 0;
}


