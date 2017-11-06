#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 27;
const int M = 37;
int n, p, dp[N][M];
vector<pair<int, int>> v;

int solve(int i, int h) {
    if (h < 0) return -INF;
    if (i == n || h == 0) return 0;
    if (dp[i][h] != -1) return dp[i][h];
    int ans = max(v[i].first+solve(i+1, h-v[i].second), solve(i+1, h));
    return dp[i][h] = ans;
}

int main() {
    while (scanf(" %d", &n) && n) {
        scanf(" %d", &p);
        v.clear();
        for (int i = 0; i < n; i++) {
            int a, b;
            scanf(" %d %d", &a, &b);
            v.push_back({a, b});
        }
        memset(dp, -1, sizeof(dp));
        printf("%d min.\n", solve(0, p));
    }
    return 0;
}


