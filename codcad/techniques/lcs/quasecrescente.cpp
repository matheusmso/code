#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int n, dp[N][N], a[N], b[N];

int main() {
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++) {
        scanf(" %d", a+i);
        b[i] = a[i];
    }
    sort(b+1, b+n+1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i] == b[j])
                dp[i][j] = dp[i-1][j-1]+1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    printf("%d\n", dp[n][n]);
    return 0;
}

