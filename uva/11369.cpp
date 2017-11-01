#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e4+7;
int t, n, v[N], dp[N];

int solve(int k) {
    if (k == n) return 0;
    if (dp[k] != -1) return dp[k];
    int ans = v[k] + solve(k+1);
    if (k + 2 < n)
        ans = min(ans, v[k] + v[k+1] + solve(k+3));
    return dp[k] = ans;
}

bool comp(int a, int b) {
    return a > b;
}

int main() {
    scanf(" %d", &t);
    for (int te = 0; te < t; te++) {
        scanf(" %d", &n);
        int tot = 0;
        memset(dp, -1, sizeof(dp));
        for (int i = 0; i < n; i++) {
            scanf(" %d", v+i);
            tot += v[i];
        }
        sort(v, v+n, comp);
        int k = solve(0);
        printf("%d\n", tot-k);
    }
    return 0;
}


