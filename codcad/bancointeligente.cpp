#include <bits/stdc++.h>
using namespace std;

const int N = (int)5e3+7;
int s, dp[N][N];
int p[] = {2, 5, 10, 20, 50, 100};
int qt[6];

int solve(int i, int j) {
    if (j == 0) return 1;
    if (i >= 6) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    int ans = 0;
    for (int k = 0; k <= qt[i]; k++) {
        if (j-(k*p[i]) < 0) break;
        ans += solve(i+1, j-(k*p[i]));
    }
    return dp[i][j] = ans;
}

int main() {
    scanf(" %d", &s);
    for (int i = 0; i < 6; i++)
        scanf(" %d", qt+i);
    /*for (int i = 0; i <= 6; i++)
        dp[i][0] = 1;
    for (int i = 1; i <= 6; i++) {
        for (int j = 0; j <= s; j++) {
            dp[i][j] = dp[i-1][j];
            for (int k = 1; k <= qt[i-1]; k++)
                if (j >= k*p[i-1])
                    dp[i][j] += dp[i-1][j-k*p[i-1]];
        }
    }
    printf("%d\n", dp[6][s]);*/
    memset(dp, -1, sizeof(dp));
    printf("%d\n", solve(0, s));
    return 0;
}

