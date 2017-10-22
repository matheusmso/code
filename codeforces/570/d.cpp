#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e5+7;
int n, d[N], l[N], r[N], tin, q;
vector<int> adj[N];
char s[N];
vector<int> tree[26][N];

int dfs(int v) {
    r[v] = l[v] = tin++;
    for (int w : adj[v]) {
        d[w] = d[v] + 1;
        r[v] = max(r[v], dfs(w));
    }
    return r[v];
}

int main() {
    scanf(" %d %d", &n, &q);
    
    for (int i = 2; i <= n; i++) {
        int x;
        scanf(" %d", &x);
        adj[x].push_back(i);
    }
    
    scanf(" %s", s+1);
    
    tin = 1;
    d[1] = 1;
    dfs(1);
    
    for (int i = 0; i < 26; i++) 
        for (int j = 1; j <= n; j++)
            if (s[j]-'a' == i) 
                tree[i][d[j]].push_back(l[j]);
    for (int i = 0; i < 26; i++)
        for (int j = 1; j <= n; j++)
            sort(tree[i][j].begin(), tree[i][j].end());
    for (int i = 1; i <= n; i++)
        r[i]++;
    
    for (int i = 0; i < q; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        if (d[x] >= y) {
            printf("Yes\n");
            continue;
        }
        int odds = 0;
        for (int j = 0; j < 26 && odds < 2; j++) {
            int cnt = lower_bound(tree[j][y].begin(), tree[j][y].end(), r[x]) - 
                      lower_bound(tree[j][y].begin(), tree[j][y].end(), l[x]);
            if (cnt) debug("%c %d\n", 'a'+j, cnt);
            if (cnt%2 == 1) {
                odds++;
            }
        }
        printf("%s\n", odds == 2 ? "No" : "Yes");
    }
    return 0;
}


