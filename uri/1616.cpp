#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int MOD = 1e9+7;
const int N = 1e3+7;
int b, g, dp[N][N];

lint solve(lint i, lint j) {
    if (i == b) return j == g;
    if (dp[i][j] != -1) return dp[i][j];
    lint ans = j*solve(i+1, j);
    ans %= MOD;
    ans += (g-j)*solve(i+1, j+1);
    ans %= MOD;
    return dp[i][j] = ans;
}

int main() {
    while (scanf(" %d %d", &b, &g) && b) {
        memset(dp, -1, sizeof(dp));
        printf("%lld\n", solve(0, 0));
    }
    return 0;
}


