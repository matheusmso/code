#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n, v[N], dp[N][2], p[N];
vector<int> g[N];

int solve(int i, bool color) {
    if (dp[i][color] != -1) return dp[i][color];
    int ans1 = v[i], ans2 = 0;
    for (int k : g[i]) {
        if (k == p[i]) continue;
        p[k] = i;
        ans1 += solve(k, true);
        ans2 += solve(k, false);
    }
    if (color) dp[i][color] = ans2;
    else dp[i][color] = max(ans1, ans2);
    return dp[i][color];
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n-1; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
        scanf(" %d", v+i);
    memset(dp, -1, sizeof(dp));
    printf("%d\n", solve(1, false));
    return 0;
}

