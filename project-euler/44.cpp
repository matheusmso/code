#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4;
lint p[N];

int main() {
    for (lint i = 0; i < N; i++)
        p[i] = i*(3*i-1)/2;
    lint D = LINF;
    for (lint i = 1; i < N; i++) {
        for (lint j = i+1; j < N; j++) {
            if (binary_search(p+1, p+N, p[i]+p[j]) && 
                    binary_search(p+1, p+N, p[j]-p[i])) {
                D = min(D, p[j]-p[i]);
                break;
            }
        }
    }
    printf("%lld\n", D);
    return 0;
}


