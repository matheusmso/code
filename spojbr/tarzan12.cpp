#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
pair<int, int> v[N];
vector<int> adj[N];
int n, d, cmp, c[N];

void dfs(int u) {
    c[u] = cmp;
    for (int k : adj[u])
        if (c[k] == -1)
            dfs(k);
}

int dist(pair<int, int> a, pair<int, int> b) {
    int x = a.first-b.first;
    int y = a.second-b.second;
    return x*x + y*y;
}

int main() {
    scanf(" %d %d", &n, &d);
    memset(c, -1, sizeof(c));
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        v[i] = {x, y};
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (dist(v[i], v[j]) <= d*d) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    for (int i = 0; i < n; i++)
        if (c[i] == -1) {
            dfs(i);
            cmp++;
        }
    if (cmp == 1)
        printf("S\n");
    else
        printf("N\n");
    return 0;
}


