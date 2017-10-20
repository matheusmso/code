#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e4+7;
vector<int> adj[N], ans;
int n, m, d[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int u, v;
        scanf(" %d %d", &u, &v);
        adj[u].push_back(v);
        d[v]++;
    }
    priority_queue<int> q;
    for (int i = 0; i < n; i++)
        if (d[i] == 0) 
            q.push(-i);
    while (!q.empty()) {
        int v = -q.top();
        q.pop();
        ans.push_back(v);
        for (int u : adj[v]) {
            d[u]--;
            if (d[u] == 0) 
                q.push(-u);
        }
    }
    if (ans.size() < n) printf("*\n");
    else
        for (int v : ans)
            printf("%d\n", v);
    return 0;
}


