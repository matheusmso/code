#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int solve(lint k) {
    int x = 1;
    while (k > 1) {
        x++;
        if (k%2 == 0)
            k /= 2;
        else
            k = 3*k+1;
    }
    return x;
}

int main() {
    int ans = 0;
    lint id;
    for (lint i = 1; i < 1e6; i++) {
        int x = solve(i);
        if (x > ans) {
            ans = x;
            id = i;
        }
    }
    printf("%lld\n", id);
    return 0;
}


