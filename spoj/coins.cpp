#include <bits/stdc++.h>
using namespace std;

long long int n;
long long int memo[10000];
long long int pd (long long int x) {
    if (x == 0)
        return 0;
    if (x < 10000 && memo[x] != -1)
        return memo[x];
    long long int k = max(x, pd(x/2) + pd(x/3) + pd(x/4));
    if (x < 10000)
        memo[x] = k;
    return k;
}

int main() {
    while (scanf("%lld", &n) != EOF) {
        memset(memo, -1, sizeof (memo));
        printf("%lld\n", pd(n));
    }
    return 0;
}

