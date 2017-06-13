#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = (int)2e3+7;
int n, p;
lint w[N], pr[N], dp[N][N];

int main() {
    scanf(" %d %d", &p, &n);
    for (int i = 1; i <= n; i++)
        scanf(" %lld %lld", w+i, pr+i);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= p; j++) {
            dp[i][j] = dp[i-1][j];
            if (w[i] <= j)
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]]+pr[i]);
        }
    }
    printf("%lld\n", dp[n][p]);
    return 0;
}

