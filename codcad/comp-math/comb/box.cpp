#include<bits/stdc++.h>
using namespace std;

typedef long long lint;
lint n, m;

int main() {
    scanf(" %lld %lld", &n, &m);
    if (3*m < n) {
        printf("0\n");
        return 0;
    }
    lint ans = 0;
    for (lint i = m; i > 0; i--) {
        lint up, low;
        if (n-i > m) {
            up = m;
            low = n-i-m;
        }
        else {
            up = n-i-1;
            low = n-i-up;
        }
        if (up > m || low > m) continue;
        lint gap = up - low + 1;
        ans += gap;
    }
    printf("%lld\n", ans);
    return 0;
}

