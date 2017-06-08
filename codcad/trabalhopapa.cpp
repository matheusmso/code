#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;
const int N = (int)1e3+7;
int n, w[N], c[N], dp[N][N];
pair<int, int> p[N];

int solve(int i, int size) {
    printf("%d %d\n", i, size);
    if (i < 0 || size < 0) return 0;
    if (dp[i][size] != -1) return dp[i][size];
    int ans = solve(i-1, size);
    if (solve(i-1, size-1) >= w[i] && c[i] >= w[i])
        ans = max(ans, min(c[i]-w[i], solve(i-1, size-1)-w[i]));
    return dp[i][size] = ans;
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d %d", w+i, c+i);
    memset(dp, -1, sizeof(dp));
    printf("%d\n", solve(n-1, n-1));
    for (int i = n-1; i >= 0; i--) {
        if (solve(n-1, i) > 0) {
            printf("%d\n", i);
            break;
        }
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%2d ", dp[i][j]);
        }
        printf("\n");
    }
    return 0;
}


