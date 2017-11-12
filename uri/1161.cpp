#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e1+7;
lint f[N];
int a, b;

int main() {
    f[0] = 1;
    for (lint i = 1; i <= 20; i++)
        f[i] = i*f[i-1];
    while (scanf(" %d %d", &a, &b) != EOF)
        printf("%lld\n", f[a] + f[b]);
    return 0;
}


