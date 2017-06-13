#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;
const int N = (int)1e3+7;
int n, m, v[N], dp[N][N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i+1);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            dp[i][j] = inf;
    for (int i = 0; i < N; i++)
        dp[i][0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= v[i]) {
                dp[i][j] = min(dp[i][j], dp[i][j-v[i]]+1);
            }
        }
    }
    printf("%s\n", dp[n][m] < 10 ? "S" : "N");
    /*for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++)
            printf("%d ", dp[i][j]);
        printf("\n");
    }*/
    return 0;
}

