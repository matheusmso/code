#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n, m, g[N][N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            g[i][j] = INF;
    for (int i = 0; i < m; i++) {
        int x, y, c;
        scanf(" %d %d %d", &x, &y, &c);
        g[x][y] = min(g[x][y], c);
        g[y][x] = min(g[y][x], c);
    }
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
    int ans = INF;
    for (int i = 0; i < n; i++) {
        int cur = 0;
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            cur = max(cur, g[i][j]);
        }
        ans = min(ans, cur);
    }
    printf("%d\n", ans);
    return 0;
}


