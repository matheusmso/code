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
        memset(dp, 0, sizeof(dp));
        scanf(" %d", &l);
        int acc = 0;
        int car;
        for (int i = 1; ; i++) {
            scanf(" %d", &car);
            car /= 100;
            acc += car;
            if (car == 0) {
                printf("%d\n", dp[i][l]);
                break;
            }
            for (int j = 0; j <= l; j++) {
                if (car <= j)
                    dp[i][j] = max(dp[i][j], dp[i-1][j-car]+1);
                if (car <= j)//acc-car
                    dp[i][j] = max(dp[i][j], dp[i-1][j]+1);
            }
        }
        for (int i = 0; i <= 7; i++) {
            for (int j = 0; j <= l; j++)
                printf("%d ", dp[i][j]);
            printf("\n");
        }
        if (t != 0) printf("\n");
    }
    return 0;
}

