#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e4+7;
int n, m, d[N];
vector<int> adj[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        adj[x].push_back(y);
        d[y]++;
    }
    priority_queue<int> q;
    for (int i = 0; i < n; i++)
        if (d[i] == 0)
            q.push(-i);
    vector<int> ans;
    while (!q.empty()) {
        int x = -q.top();
        q.pop();
        ans.push_back(x);
        for (int u : adj[x]) {
            d[u]--;
            if (d[u] == 0)
                q.push(-u);
        }
    }
    if (ans.size() != n)
        printf("*\n");
    else 
        for (int i : ans)
            printf("%d\n", i);
    return 0;
}


