#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
char g[N][N];
int n, m, vis[N][N], ans;
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

bool isIn(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int i, int j) {
    vis[i][j] = 1;
    for (int o = 0; o < 8; o++) {
        int x = i+dx[o];
        int y = j+dy[o];
        if (isIn(x, y) && vis[x][y] == 0 && g[x][y] == '@') 
            dfs(x, y);
    }
}

int main() {
    while (scanf(" %d %d", &n, &m) && n) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                scanf(" %c", &g[i][j]);
        ans = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (vis[i][j] == 0 && g[i][j] == '@') {
                    ans++;
                    dfs(i, j);
                }
        printf("%d\n", ans);
        memset(vis, 0, sizeof(vis));
    }
    return 0;
}

