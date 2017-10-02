#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const lint INF = 0x3f3f3f3f3f3f3f3f;
const int N = 5e3+7;
int n, m, k;
lint dp[N][N], v[N], s[N];

lint solve(int i, int j) {
    if (j == k) return 0;
    if (i > n) return -INF;
    if (dp[i][j] != -1) return dp[i][j];
    lint ans = max(solve(i+1, j), s[i+m-1] - s[i-1] + solve(i+m, j+1));
    return dp[i][j] = ans;
}

int main() {
    scanf(" %d %d %d", &n, &m, &k);
    for (int i = 1; i <= n; i++)
        scanf(" %lld", v+i);
    for (int i = 1; i <= n; i++)
        s[i] += s[i-1]+v[i];
    memset(dp, -1, sizeof(dp));
    printf("%lld\n", solve(1, 0));
    return 0;
}
