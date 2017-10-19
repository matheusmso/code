#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e2+7;
char g[N][N];
int seen[N][N], n, m, k, s;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int i, int j) {
    if (s <= 0) return;
    debug("%d %d %d\n", i, j, s);
    seen[i][j] = 1;
    g[i][j] = 'a';
    s--;
    for (int o = 0; o < 4; o++) {
        int x = i + dx[o];
        int y = j + dy[o];
        if (g[x][y] == '.' && seen[x][y] == 0)
            dfs(x, y);
    }
}

int main() {
    scanf(" %d %d %d", &n, &m, &k);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            scanf(" %c", &g[i][j]);
            s += g[i][j] == '.';
        }
    s = s-k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (g[i][j] == '.' && seen[i][j] == 0) 
                dfs(i, j);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char c;
            if (g[i][j] == '.')
                c = 'X';
            else if (g[i][j] == 'a')
                c = '.';
            else c = g[i][j];
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}


