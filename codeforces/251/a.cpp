#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
lint n, d;
lint v[N], sum[N];

int main() {
    scanf(" %lld %lld", &n, &d);
    for (lint i = 0; i < n; i++)
        scanf(" %lld", v+i);
    lint ans = 0;
    for (lint i = 1; i <= n; i++) 
        sum[i] = sum[i-1]+i;
    for (lint i = 0, j = 0; i < n; i++) {
        while (j < n && v[j] - v[i] <= d) j++;
        if (j-i >= 3) ans += sum[j-i-2];
    }
    printf("%lld\n", ans);
    return 0;
}


