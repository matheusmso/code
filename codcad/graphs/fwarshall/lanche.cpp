#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 3e2+7;
int n, m, g[N][N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            g[i][j] = INF;
    for (int i = 1; i <= m; i++) {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        g[a][b] = c;
        g[b][a] = c;
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
    int ans = INF;
    for (int i = 1; i <= n; i++) {
        int cur = 0;
        for (int j = 1; j <= n; j++) {
            if (j == i) continue;
            cur = max(cur, g[i][j]);
        }
        ans = min(ans, cur);
    }
    printf("%d\n", ans);
    return 0;
}


