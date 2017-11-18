#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int main() {
    lint s1, s2;
    s1 = s2 = 0;
    for (int i = 1; i <= 100; i++) {
        s1 += i*i;
        s2 += i;
    }
    s2 *= s2;
    printf("%lld\n", s2-s1);
    return 0;
}


