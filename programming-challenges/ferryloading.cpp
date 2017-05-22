#include<bits/stdc++.h>
using namespace std;
const int M = (int)2e2+7;
const int N = (int)1e4+7;
int n, l, dp[M][N], v[N], t;
const int inf = 0x3f3f3f3f;

int solve(int i, int j, int k) {
    if (j < 0 || k < 0) return -inf;
    if (i >= n) return 0;
    if (~dp[i][j]) return dp[i][j];
    return dp[i][j] = max(0, max(solve(i+1, j-v[i], k), solve(i+1, j, k-v[i]))+1);
}

void build(int i, int j, int k) {
    if (dp[i][j] == solve(i+1, j-v[i],k)+1) {
        printf("port\n");
        build(i+1, j-v[i], k);
    }
    else if (dp[i][j] == solve(i+1, j, k-v[i])+1){
        printf("starboard\n");
        build(i+1, j, k-v[i]);
    }
}

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d", &l);
        l *= 100;
        n = 0;
        while (1) {
            scanf(" %d", v+n);
            if (v[n] == 0) break;
            n++;
        }
        memset(dp, -1, sizeof(dp));
        printf("%d\n", solve(0, l, l));
        build(0, l, l);
        if (t != 0) printf("\n");
    }
    return 0;
}

