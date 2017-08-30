#include<bits/stdc++.h>

typedef long long lint;
lint l, r, x, y, k;

int main() {
    scanf(" %lld %lld %lld %lld %lld", &l, &r, &x, &y, &k);
    for (lint i = x; i <= y; i++)
        if (k*i >= l && k*i <= r) {
            printf("YES\n");
            return 0;
        }
    printf("NO\n");
    return 0;
}

