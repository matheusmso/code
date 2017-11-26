#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6;
lint t[N], p[N], h[N];

int main() {
    for (lint i = 1; i < N; i++) {
        t[i] = i*(i+1)/2;
        p[i] = i*(3*i-1)/2;
        h[i] = i*(2*i-1);
    }
    for (int i = 280; i < N; i++)
        if (binary_search(p+1, p+N, t[i]) && binary_search(h+1, h+N, t[i]))
            printf("%d %lld\n", i, t[i]);
    return 0;
}


