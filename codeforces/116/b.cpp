#include <bits/stdc++.h>
using namespace std;

int n, m;
char g[15][15];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf(" %c", &g[i][j]);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int aux = 0;
            if (g[i][j] == 'W') {
                if (g[i+1][j] == 'P') aux++;
                if (g[i-1][j] == 'P') aux++;
                if (g[i][j+1] == 'P') aux++;
                if (g[i][j-1] == 'P') aux++;
            }
            if (aux) ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}

    
    
