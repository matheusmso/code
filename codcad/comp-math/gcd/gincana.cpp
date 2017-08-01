#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
lint n, m;

int main() {
    scanf(" %lld %lld", &n, &m);
    for (lint i = m; i > 0; i--)
        if (__gcd(i, n) == 1) {
            printf("%lld\n", i);
            return 0;
        }
    return 0;
}
