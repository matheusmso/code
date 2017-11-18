#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e6;
bool p[N];
lint sum;

void sieve() {
    for (lint i = 2; i < N; i++) {
        if (p[i] == false) {
            p[i] = true;
            sum += i;
            for (lint j = i*i; j < N; j += i)
                p[j] = true;
        }
    }
}

int main() {
    sieve();
    printf("%lld\n", sum);
    return 0;
}


