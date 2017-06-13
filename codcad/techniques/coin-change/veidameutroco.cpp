#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int n, m, dp[N][N], v[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i+1);
    for (int i = 0; i < n; i++)
        dp[i][0] = 1;
    //dp[0][0] == 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= v[i])
                dp[i][j] += dp[i][j-v[i]];
            //dp[i][j] += dp[i-1][j];
        }
    }
    /*for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            printf("%d ", dp[i][j]);
        }
        printf("\n");
    }*/
    //printf("%d\n", dp[n][m]);
    printf("%s\n", dp[n][m] ? "S" : "N");
    return 0;
}

