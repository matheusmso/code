#include <bits/stdc++.h>
using namespace std;
const int N = (int)3e4+7;
int la[N][20], d[N], fur, dist;
vector<int> adj[N];

void dfs(int u, int p) {
    la[u][0] = p;
    for (int i = 1; i < 20; i++)
        la[u][i] = la[la[u][i-1]][i-1];
    for (int x : adj[u]) {
        if (x != p) {
            d[x] = d[u]+1;
            dfs(x, u);
        }
    }
}

int lca(int u, int v) {
    if (d[u] > d[v]) swap(u, v);
    for (int i = 19; i >= 0; i--)
        if (d[la[v][i]] >= d[u])
            v = la[v][i];
    if (u == v) return v;
    for (int i = 19; i >= 0; i--) {
        if (la[u][i] != la[v][i]) {
            u = la[u][i];
            v = la[v][i];
        }
    }
    return la[v][0];
}

int dis(int a, int b) {
    return d[a]+d[b]-2*d[lca(a, b)];
}

void dfsm(int u, int p, int d) {
    if (d > dist) {
        dist = d;
        fur = u;
    }
    for (int i : adj[u])
        if (i != p)
            dfsm(i, u, d+1);
}

int main() {
    int n, q;
    scanf(" %d %d", &n, &q);
    for (int i = 0; i < n-1; i++) {
        int u, v;
        scanf(" %d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 1);
    fur = dist = 0;
    dfsm(1, 1, 0);
    int fur1 = fur;
    fur = dist = 0;
    dfsm(fur1, fur1, 0);
    int fur2 = fur;
    //printf("%d %d\n", fur1, fur2);
    while (q--) {
        int v, de;
        scanf(" %d %d", &v, &de);
        int d1, d2;
        d1 = dis(v, fur1);
        d2 = dis(v, fur2);
        if (max(d1, d2) < de) printf("0\n");
        else {
            if (d1 < de) {
                swap(d1, d2);
                swap(fur1, fur2);
            }
            int l1 = lca(v, fur1);
            int aux = dis(v, l1);
            if (de > aux) {
                v = fur1;
                de -= aux;
                aux = dis(fur1, l1);
                de = aux-de;
                for (int i = 19; i >= 0 && de > 0; i--) {
                    if (1<<i <= de) {
                        de -= 1<<i;
                        v = la[v][i];
                    }
                }
                printf("%d\n", v);
            }
            else {
                for (int i = 19; i >= 0 && de > 0; i--) {
                    if (1<<i <= de) {
                        de -= 1<<i;
                        v = la[v][i];
                    }
                }
                printf("%d\n", v);
            }
        }
    }
    return 0;
}
