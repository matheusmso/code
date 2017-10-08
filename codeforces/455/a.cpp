#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 1e5+7;
int n;
lint v[N], f[N], dp[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %lld", v+i);
        f[v[i]]++;
    }
    dp[1] = f[1];
    for (lint i = 2; i < N; i++) 
        dp[i] = max(dp[i-1], dp[i-2] + f[i]*i);
    printf("%lld\n", dp[N-1]);
    return 0;
}

