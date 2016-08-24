#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e5+7;
int la[N][20], d[N], cs[N], cost[N];
vector<int> adj[N];

void dfs(int u, int p) {
    la[u][0] = p;
    for (int i = 1; i < 20; i++)
        la[u][i] = la[la[u][i-1]][i-1];
    for (int x : adj[u]) {
        cost[x] = cost[u]+cs[x];
        d[x] = d[u]+1;
        dfs(x, u);
    }
}

int lca(int u, int v) {
    if (d[u] > d[v]) swap(u, v);
    for (int i = 19; i >= 0; i--)
        if (d[la[v][i]] >= d[u])
            v = la[v][i];
    if (u == v) return v;
    for (int i = 19; i >= 0; i--) {
        if (la[v][i] != la[u][i]) {
            v = la[v][i];
            u = la[u][i];
        }
    }
    return la[v][0];
}

int main() {
    int t;
    scanf(" %d", &t);
    while (t--) {
        int n;
        scanf(" %d", &n);
        for (int i = 0; i < n-1; i++) {
            int a, b, c;
            scanf(" %d %d %d", &a, &b, &c);
            cs[b] = c;
            adj[a].push_back(b);
        }
        dfs(1, 1);
        char s[10];
        while (scanf(" %s", s) && s[1] != 'O') {
            if (s[0] == 'D') {
                int a, b;
                scanf(" %d %d", &a, &b);
                int l = lca(a, b);
                printf("%d\n", cost[a]+cost[b]-2*cost[l]);
            }
            else {
                int a, b, k;
                scanf(" %d %d %d", &a, &b, &k);
                int l = lca(a, b);
                if (d[a]-d[l] >= k) {//subir do a
                    k--;
                    for (int i = 19; i >= 0 && k > 0; i--) {
                        if (1<<i <= k) {
                            k -= 1<<i;
                            a = la[a][i];
                        }
                    }
                    printf("%d\n", a);
                }
                else {//subir do b
                    k = k-d[a]+d[l];
                    k = d[b]-d[l]+1-k;
                    for (int i = 19; i >= 0 && k > 0; i--) {
                        if (1<<i <= k) {
                            k-= 1<<i;
                            b = la[b][i];
                        }
                    }
                    printf("%d\n", b);
                }
            }
        }
        printf("\n");
        for (int i = 0; i < n; i++)
            adj[i].clear();
        memset(cs, 0, sizeof(cs));
        memset(cost, 0, sizeof(cost));
        memset(la, 0, sizeof(la));
        memset(d, 0, sizeof(d));
    }
    return 0;
}
