#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e2+7;;
lint dp[N][10];
int c[] = {1, 2, 5, 10, 20, 50, 100, 200};

lint solve(int k, int m) {
    if (k == 0) return 1;
    if (m >= 8) return 0;
    if (dp[k][m] != -1) return dp[k][m];
    lint ans = 0;
    if (c[m] <= k)
        ans += solve(k-c[m], m);
    ans += solve(k, m+1);
    return dp[k][m] = ans;
}

int main() {
    memset(dp, -1, sizeof(dp));
    printf("%lld\n", solve(200, 0));
    return 0;
}


