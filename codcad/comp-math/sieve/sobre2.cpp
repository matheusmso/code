#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = (int) 1e7+7;
int n;
lint p[N];

void sieve() {
    for (lint i = 2; i <= n; i++) {
        if (p[i] == 0) {
            p[i] = i;
            for (lint j = i*i; j <= n; j += i)
                p[j] = i;
        }
    }
}

int main() {
    scanf(" %d", &n);
    sieve();
    for (lint i = 2; i <= n; i++)
        if (p[i] == i)
            printf("%lld ", i);
    printf("\n");
    return 0;
}


