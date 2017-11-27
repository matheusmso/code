#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6;
lint p[N];
int k = 4;

void sieve() {
    for (lint i = 2; i < N; i++)
        if (p[i] == 0) {
            p[i] = i;
            for (lint j = i*i; j < N; j += i)
                p[j] = i;
        }
}

int main() {
    sieve();
    for (lint i = 1; i < N; i++) {
        bool ok = true;
        for (lint j = 0; j < k && ok; j++) {
            map<lint, int> m;
            lint a = i+j;
            while (a > 1) {
                m[p[a]]++;
                a /= p[a];
            }
            if (m.size() < k)
                ok = false;
        }
        if (ok) {
            printf("%lld\n", i);
            return 0;
        }
    }
    return 0;
}


