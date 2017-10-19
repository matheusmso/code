#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e2+7;
int n, m, q, seen[N], age[N], cur, p[N];
vector<int> adj[N];

void dfs(int v) {
    seen[v] = 1;
    for (int w : adj[v]) 
        if (seen[w] == 0) {
            dfs(w);
            cur = min(cur, age[w]);
        }
}

int main() {
    while (scanf(" %d %d %d", &n, &m, &q) != EOF) {
        for (int i = 0; i < n; i++)
            scanf(" %d", age+i);
        for (int i = 0; i < n; i++) {
            p[i] = i;
        }
        for (int i = 0; i < m; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            x--;
            y--;
            adj[y].push_back(x);
        }
        for (int i = 0; i < q; i++) {
            char c;
            int x, y;
            scanf(" %c", &c);
            if (c == 'T') {
                scanf(" %d %d", &x, &y);
                x--;
                y--;
                swap(age[p[x]], age[p[y]]);
                swap(p[x], p[y]);
            }
            else {
                scanf(" %d", &x);
                x--;
                if (adj[p[x]].size() == 0)
                    printf("*\n");
                else {
                    memset(seen, 0, sizeof(seen));
                    cur = 200;
                    dfs(p[x]);
                    printf("%d\n", cur);
                }
            }
        }
        for (int i = 0; i < N; i++)
            adj[i].clear();
    }
    return 0;
}


