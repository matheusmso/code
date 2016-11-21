#include <bits/stdc++.h>
using namespace std;
const int N = 107;
vector<int> adj[N];
int low[N], d[N], seen[N], n, m, t, root;
map<string, int> loca;
string name[N];
set<string> cam;

void dfs(int u, int p) {
    seen[u] = 1;
    low[u] = d[u] = t++;
    int ns = 0;
    bool any = false;
    for (int x : adj[u]) {
        if (!seen[x]) {
            dfs(x, u);
            ns++;
            if (low[x] >= d[u]) any = true;
            low[u] = min(low[u], low[x]);
        }
        else if (x != p)
            low[u] = min(low[u], d[x]);
    }
    if (u == root && ns > 1)
        cam.insert(name[u]);
    else if (u != root && any)
        cam.insert(name[u]);
}

int main() {
    int count = 1;
    while (scanf(" %d", &n) && n) {
        if (count > 1) {
            printf("\n");
            memset(low, 0, sizeof(low));
            memset(d, 0, sizeof(d));
            memset(seen, 0, sizeof(seen));
            for (auto& x : adj)
                x.clear();
            loca.clear();
            cam.clear();
        }
        for (int i = 0; i < n; i++) {
            cin >> name[i];
            loca[name[i]] = i;
        }
        scanf(" %d", &m);
        for (int i = 0; i < m; i++) {
            string u, v;
            cin >> u >> v;
            int x = loca.find(u)->second;
            int y = loca.find(v)->second;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        t = 0;
        for (int i = 0; i < n; i++) {
            if (!seen[i]) {
                root = i;
                dfs(i, i);
            }
        }
        printf("City map #%d: %d camera(s) found\n", count++, cam.size());
        for (string s : cam)
            cout << s << endl;
    }
    return 0;
}

