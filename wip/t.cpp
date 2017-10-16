#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
vector<int> adj[N], color;
int n, m, k;

bool go(int v) {
    if (v == n) {
        set<int> used;
        for (int i = 0; i < n; i++)
            used.insert(color[i]);
        if (used.size() <= k) {
            printf("possivel de ser colorido\n");
            for (int i = 0; i < n; i++)
                printf("%d %d\n", i, color[i]);
            return true;
        }
        return false;
    }
    set<int> used;
    for (int w : adj[v])
        if (color[w] != -1)
            used.insert(color[w]);
    for (int i = 0; i < k; i++) {
        if (used.count(i) == 0) {
            color[v] = i;
            if (go(v+1))
                return true;
            color[v] = -1;
        }
    }
    return false;
}

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int v, w;
        scanf(" %d %d", &v, &w);
        adj[v].push_back(w);
        adj[w].push_back(v);
    }
    color.resize(n, -1);
    scanf(" %d", &k);
    go(0);
    return 0;
}


