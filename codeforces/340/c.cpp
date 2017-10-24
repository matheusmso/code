#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
lint n, v[N];

int main() {
    scanf(" %lld", &n);
    for (int i = 0; i < n; i++)
        scanf(" %lld", v+i);
    sort(v, v+n);
    lint p = 0;
    lint q = n;
    lint acc = 0;
    for (lint i = 0; i < n; i++) {
        p += i*v[i]-acc;
        acc += v[i];
    }
    p *= 2;
    p += acc;
    lint t;
    do {
        t = __gcd(p, q);
        p /= t;
        q /= t;
    } while (t != 1);
    printf("%lld %lld\n", p, q);
    return 0;
}


