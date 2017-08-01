#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = (int) 2e7+7;

int n, pr;
lint p[N];

void sieve() {
    for (lint i = 2; i <= N; i++) {
        if (p[i] == 0) {
            p[i] = i;
            pr++;
            if (pr == n) {
                printf("%lld\n", i);
                return;
            }
            for (lint j = i*i; j <= N; j += i)
                p[j] = i;
        }
    }
}

int main() {
    scanf(" %d", &n);
    sieve();
    return 0;
}


