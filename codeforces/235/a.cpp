#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

lint n;

lint lcm(lint a, lint b) {
    return (a*b)/__gcd(a, b);
}

int main() {
    scanf(" %lld", &n);
    lint ans = 0;
    if (n <= 2) {
        printf("%lld\n", n);
        return 0;
    }
    for (lint i = max(1ll, n-50); i <= n; i++)
        for (lint j = i+1; j <= n; j++)
            for (lint k = j+1; k <= n; k++)
                ans = max(ans, lcm(lcm(i, j), k));
    printf("%lld\n", ans);
    return 0;
}


