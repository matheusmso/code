#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = (int)2e6+7;

int q;
lint p[N], ans[N];

void sieve() {
    int pos = 1;
    for (lint i = 2; i <= N; i++) {
        if (p[i] == 0) {
            p[i] = i;
            ans[i] = pos++;
            for (lint j = i*i; j <= N; j += i)
                p[j] = i;
        }
    }
}

int main() {
    sieve();
    while (scanf(" %d", &q) != EOF) {
        while (q--) {
            int x;
            scanf(" %d", &x);
            assert(x > 0);
            assert(x < 1300000);
            printf("%d\n", ans[x]);;
        }
    }
    return 0;
}

