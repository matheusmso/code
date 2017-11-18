#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 20;
int g[N][N], dp[N][N];
char s[N];

int solve(int i, int j) {
    if (i < j) return -INF;
    if (i == 15) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    int ans = max(solve(i+1, j), solve(i+1, j+1));
    return dp[i][j] = ans+g[i][j];
}

int main() {
    for (int i = 0; i < 15; i++)
        for (int j = 0; j <= i; j++) {
            scanf(" %s", s);
            g[i][j] = atoi(s);
        }
    memset(dp, -1, sizeof(dp));
    printf("%d\n", solve(0, 0));
    return 0;
}


