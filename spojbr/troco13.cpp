#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
const int M = 1e3+7;
int v, m, c[M];
int dp[N][M];
map<pair<int, int>, int> mp;

bool solve(int k, int i) {
    if (k == 0) return true;
    if (i == m || k < 0) return false;
    if (dp[k][i] != -1)
        return dp[k][i];
    if (solve(k, i+1) || solve(k-c[i], i+1))
        return dp[k][i] = true;
    return dp[k][i] = false;;
}

int main() {
    scanf(" %d %d", &v, &m);
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < m; i++)
        scanf(" %d", c+i);
    sort(c, c+m);
    printf("%c\n", solve(v, 0) ? 'S' : 'N');
    return 0;
}


