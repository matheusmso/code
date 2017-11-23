#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
int g[N][N];

int main() {
    int l, r, t, b, c;
    l = 0;
    r = 1000;
    b = 0;
    t = 1000;
    c = 1001*1001;
    while (c) {
        for (int i = r; i >= l && c; i--)
            g[t][i] = c--;
        t--;
        for (int i = t; i >= b && c; i--)
            g[i][l] = c--;
        l++;
        for (int i = l; i <= r && c; i++)
            g[b][i] = c--;
        b++;
        for (int i = b; i <= t && c; i++)
            g[i][r] = c--;
        r--;
    }
    lint sum = 0;
    for (int i = 0; i < 1001; i++)
        sum += (lint)g[i][i] + (lint)g[i][1001-i];
    printf("%lld\n", sum);
    return 0;
}


