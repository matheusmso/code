#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
vector<int> adj[N];
vector<int> l[N];
int n, m, pre[N], tot;

void dfs(int v) {
    pre[v] = 1;
    for (int k : adj[v])
        if (pre[k] == 0)
            dfs(k);
}       

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        int k;
        scanf(" %d", &k);
        for (int j = 0; j < k; j++) {
            int x;
            scanf(" %d", &x);
            l[x-1].push_back(i);
        }
        tot += k;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l[i].size(); j++) {
            for (int k = j+1; k < l[i].size(); k++) {
                adj[l[i][j]].push_back(l[i][k]);
                adj[l[i][k]].push_back(l[i][j]);
            }
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++)
        if (pre[i] == 0) {
            c++;
            dfs(i);
        }
    if (tot == 0) printf("%d\n", n);
    else printf("%d\n", c-1);
    return 0;
}
