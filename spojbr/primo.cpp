#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

lint n;

int main() {
    scanf(" %lld", &n);
    for (lint i = 2; i*i <= n; i++)
        if (n%i == 0) {
            printf("nao\n");
            return 0;
        }
    printf("sim\n");
    return 0;
}


