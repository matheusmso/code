#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
const int N = 1e4+7;
int a, b, f, k;
int dp[N][N];

int solve(int i, int j) { //lap lap refuele
    int cur;
    if (j == 10001) cur = b-(i*a);
    else {
        if (j%2 == 0) {
            cur = b-a+f;
            cur -= (i-j-1)*a;
        }
        else {
            cur = b-f;
            cur -= (i-j-1)*a;
        }
    }
    if (i == k) {
        if (i%2 == 0 && cur < f) return 1;
        else if (i%2 == 1 && cur < a-f) return 1;
        else return 0;
    }
    if (cur < 0) return INF;
    if (i%2 == 0 && cur < f) return INF;
    if (i%2 == 1 && cur < a-f) return INF;
    if (dp[i][j] != -1) return dp[i][j];
    printf("%d %d %d\n", i, j, cur);
    int ans = solve(i+1, j);
    ans = min(ans, solve(i+1, i) + 1);
    return dp[i][j] = ans;
}

int main() { 
    scanf(" %d %d %d %d", &a, &b, &f, &k);
    memset(dp, -1, sizeof(dp));
    int q = solve(0, 10001);
    if (q == INF) printf("-1\n");
    else printf("%d\n", q);
    return 0;
}
