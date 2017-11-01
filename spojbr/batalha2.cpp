#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
char g[N][N];
int n, m, k, vis[N][N], t;
set<int> s;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool isIn(int i, int j) {
    return i >= 1 && i <= n && j >= 1 && j <= m;
}

void dfs(int i, int j) {
    vis[i][j] = t;
    for (int o = 0; o < 4; o++) {
        int x = i+dx[o];
        int y = j+dy[o];
        if (isIn(x, y) && g[x][y] == '#' && vis[x][y] == 0)
            dfs(x, y);
    }
}

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf(" %c", &g[i][j]);
    scanf(" %d", &k);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (vis[i][j] == 0 && g[i][j] == '#') {
                t++;
                dfs(i, j);
            }
    for (int i = 0; i < k; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        vis[x][y] = 0;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (vis[i][j] != 0)
                s.insert(vis[i][j]);
    printf("%d\n", t-s.size());
    return 0;
}


