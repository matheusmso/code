#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int c, f, dp[N][N], s[N], d[N];

int main() {
    int t = 1;
    while (scanf(" %d %d", &c, &f) && c) {
        printf("Teste %d\n", t++);
        memset(dp, 0, sizeof(dp));
        memset(s, 0, sizeof(s));
        memset(d, 0, sizeof(d));
        for (int i = 1; i <= f; i++)
            scanf(" %d %d", s+i, d+i);
        for (int i = 1; i <= f; i++) {
            for (int j = 0; j <= c; j++) {
                dp[i][j] = dp[i-1][j];
                if (s[i] <= j)
                    dp[i][j] = max(dp[i][j], dp[i-1][j-s[i]]+d[i]);
            }
        }
        printf("%d\n\n", dp[f][c]);
    }
    return 0;
}

