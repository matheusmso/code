#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e2+7;
int g[N][N], seen[N][N], f[N*N];
int h, l;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int ans = INF;
int cur, color;

void dfs(int i, int j) {
    if (i == 0 || i == h+1 || j == 0 || j == l+1) return;
    seen[i][j] = 1;
    cur++;
    for (int o = 0; o < 4; o++) {
        int x = i + dx[o];
        int y = j + dy[o];
        if (seen[x][y] == 0 && g[i][j] == g[x][y])
            dfs(x, y);
    }
}

int main() {
    scanf (" %d %d", &h, &l);
    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= l; j++) {
            scanf(" %d", &g[i][j]);
            f[g[i][j]]++;
        }
    for (int i = 1; i <= 40000; i++)
        if (f[i] == 0) {
            color = i;
            break;
        }
    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= l; j++) {
            if (g[i][j] == 0)
                g[i][j] = color;
        }
    for (int i = 1; i <= h; i++)
        for (int j = 1; j <= l; j++)
            if (seen[i][j] == 0) {
                cur = 0;
                dfs(i, j);
                ans = min(cur, ans);
            }
    printf("%d\n", ans);
    return 0;
}


