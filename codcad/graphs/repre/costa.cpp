#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int g[N][N], ans, n, m;
int x[] = {-1, 0, 1, 0};
int y[] = {0, 1, 0, -1};

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            char c;
            scanf(" %c", &c);
            if (c == '#')
                g[i][j] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (g[i][j]) {
                int cur = 0;
                for (int k = 0; k < 4; k++)
                    cur += g[i+x[k]][j+y[k]];
                if (cur != 4) ans++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}


