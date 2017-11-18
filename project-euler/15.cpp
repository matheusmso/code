#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 27;
lint dp[N][N];

int main() {
    for (int i = 0; i <= 20; i++)
        dp[i][0] = dp[0][i] = 1;
    for (int i = 1; i <= 20; i++)
        for (int j = 1; j <= 20; j++)
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
    printf("%lld\n", dp[20][20]);
    return 0;
}


