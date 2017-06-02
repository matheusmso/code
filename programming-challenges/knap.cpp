#include<bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int n, w[N], dp[N][N], v[N], s;

int main() {
    scanf(" %d %d", &n, &s);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i+1);
    for (int i = 0; i < n; i++)
        scanf(" %d", w+i+1);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            if (w[i] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
        }
    }
    printf("%d\n", dp[n][s]);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= s; j++)
            printf("%d ", dp[i][j]);
        printf("\n");
    }
    return 0;
}


