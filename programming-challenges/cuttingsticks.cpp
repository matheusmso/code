#include<bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
const int inf = 0x3f3f3f3f;
int l, v[N], dp[N][N], n;

int main() {
    while (scanf(" %d", &l) && l) {
        scanf(" %d", &n);
        v[0] = 0;
        for (int i = 1; i <= n; i++)
            scanf(" %d", v+i);
        v[n+1] = l;
        for (int i = 0; i < n+2; i++) {
            dp[i][i] = 0;
            if (i < n+1)
                dp[i][i+1] = 0;
        }
        for (int d = 2; d < n+2; d++) {
            for (int i = 0; i < n+2-d ; i++) {
                int j = i + d;
                dp[i][j] = inf;
                for (int k = i+1; k < j; k++)
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + v[j] - v[i]);
            }
        }
        printf("The minimum cutting is %d.\n", dp[0][n+1]);
    }
    return 0;
}

