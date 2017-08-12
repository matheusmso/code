#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
vector<int> adj[N];
int s[N], n;

void dfs(int v, int p) {
    set<int> ss;
    for (int i: adj[v]) {
        if (i != p) {
            dfs(i, v);
            s[v] += s[i];
            ss.insert(s[i]);
        }
    }
    s[v]++;
    if (ss.size() > 1) {
        printf("mal\n");
        exit(0);
    }
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(0, 0);
    printf("bem\n");
    return 0;
}
