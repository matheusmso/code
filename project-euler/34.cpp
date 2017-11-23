#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

lint f[10];

int main() {
    f[0] = 1;
    lint ans = 0;
    for (lint i = 1; i < 10; i++)
        f[i] = f[i-1]*i;
    for (lint i = 3; i < 1e6; i++) {
        lint sum = 0;
        lint a = i;
        while (a) {
            sum += f[a%10];
            a /= 10;
        }
        if (i == sum) 
            ans += i;
    }
    printf("%lld\n", ans);
    return 0;
}


