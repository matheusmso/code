#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
const int N = 4e3+7;
int n, a, b, c, dp[N];

int solve(int k) {
    if (k == 0) return 0;
    if (k < min({a, b, c})) return -INF;
    if (dp[k] != -1) return dp[k];
    int ans = 1 + max({solve(k-a), solve(k-b), solve(k-c)});
    return dp[k] = ans;
}

int main() {
    scanf(" %d %d %d %d", &n, &a, &b, &c);
    memset(dp, -1, sizeof(dp));
    printf("%d\n", solve(n));
    return 0;
}
