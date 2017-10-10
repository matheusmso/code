#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 1e7+7;
const lint MOD = 1e9+7;
lint dp[N][2];

int main() {
    int n;
    scanf(" %d", &n);
    dp[1][1] = 3;
    for (int i = 2; i <= n; i++) {
        dp[i][1] = (dp[i-1][1]*3)%MOD;
        dp[i][0] = (dp[i-1][1] - dp[i-1][0] + MOD)%MOD;
    }
    printf("%lld\n", dp[n][0]);
    return 0;
}

