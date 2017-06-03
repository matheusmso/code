#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int n, m, dp[N][N], a[N], b[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf(" %d", a+i);
    for (int i = 1; i <= m; i++)
        scanf(" %d", b+i);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i] == b[j])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    printf("%d %d\n", n-dp[n][m], m-dp[n][m]);
    return 0;
}

