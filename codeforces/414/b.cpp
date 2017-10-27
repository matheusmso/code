#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e3+7;
const lint MOD = 1e9+7;
lint dp[N][N];
int n, k;
vector<int> d[N];

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 1; i <= n; i++)
        for (int j = i; j >= 1; j--) 
            if (i%j == 0)
                d[i].push_back(j);
    for (int i = 1; i <= n; i++)
        dp[i][1] = 1;
    for (int i = 1; i <= k; i++)
        dp[1][i] = 1;
    for (int i = 2; i <= n; i++) 
        for (int j = 2; j <= k; j++) 
            for (int w : d[i])
                dp[i][j] = (dp[i][j] + dp[w][j-1])%MOD;
    lint ans = 0;
    for (int i = 1; i <= n; i++)
        ans = (ans + dp[i][k])%MOD;
    printf("%lld\n", ans);
    return 0;
}

