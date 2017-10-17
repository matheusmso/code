#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;
const lint MOD = 1e8;

lint dp[107][107][17][2];
int n1, n2, k[2];

lint solve(int c1, int c2, int sq, int t) {
    debug("%d %d %d %d\n", c1, c2, sq, t);
    if (c1 == 0 && c2 == 0) return sq <= k[t];
    if (c1 < 0 || c2 < 0) return 0;
    if (dp[c1][c2][sq][t] != -1) return dp[c1][c2][sq][t];
    lint ans = 0;
    if (t == 0) {
        if (sq == k[0])
            ans += solve(c1, c2-1, 1, 1);
        else 
            ans += solve(c1-1, c2, sq+1, t) + solve(c1, c2-1, 1, 1-t);
    }
    else {
        if (sq == k[1])
            ans += solve(c1-1, c2, 1, 0);
        else 
            ans += solve(c1-1, c2, 1, 1-t) + solve(c1, c2-1, sq+1, t);
    }
    return dp[c1][c2][sq][t] = ans%MOD;
}

int main() {
    scanf(" %d %d %d %d", &n1, &n2, &k[0], &k[1]);
    memset(dp, -1, sizeof(dp));
    printf("%lld\n", solve(n1, n2, 0, 0));
    return 0;
}


