#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e3+7;
int n, m, pre[N], low[N], sc[N], cmp, tin, d[N];
vector<int> adj[N];
bool in_stack[N];
stack<int> st;

void dfs(int v) {
    low[v] = pre[v] = tin++;
    st.push(v);
    in_stack[v] = 1;
    for (int u : adj[v]) {
        if (pre[u] == -1) {
            dfs(u);
            low[v] = min(low[v], low[u]);
        }
        else if (in_stack[u])
            low[v] = min(low[v], pre[u]);
    }
    if (pre[v] == low[v]) {
        int vv;
        do {
            vv = st.top();
            st.pop();
            in_stack[vv] = 0;
            sc[vv] = cmp;
        } while (vv != v);
        cmp++;
    }
}


void tarjan() {
    for (int i = 1; i <= n; i++) {
        pre[i] = -1;
        in_stack[i] = false;
    }
    tin = 0;
    cmp = 0;
    while (!st.empty())
        st.pop();
    for (int i = 1; i <= n; i++)
        if (pre[i] == -1)
            dfs(i);
}

int main() {
    while (scanf(" %d", &n) && n) {
        scanf(" %d", &m);
        for (int i = 0; i < m; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            adj[x].push_back(y);
        }
        tarjan();
        debug("cmp = %d\n", cmp);
        for (int i = 0; i < cmp; i++) 
            d[i] = 0;
        for (int i = 1; i <= n; i++)
            for (int v : adj[i])
                if (sc[i] != sc[v]) 
                    d[sc[i]]++;
        vector<int> ans;
        for (int i = 1; i <= n; i++)
            if (d[sc[i]] == 0)
                ans.push_back(i);
        for (int i = 0; i < ans.size(); i++)
            printf("%d%c", ans[i], " \n"[i == ans.size()-1]);
        if (ans.size() == 0)
            printf("\n");
        for (int i = 1; i <=n; i++)
            adj[i].clear();
    }           
    return 0;
}


