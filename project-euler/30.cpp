#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int p[10];

bool ok(int k) {
    int t = k;
    int s = 0;
    while (k) {
        s += p[k%10];
        k /= 10;
    }
    return s == t;
}

int main() {
    for (int i = 1; i < 10; i++) {
        int a = 1;
        for (int j = 0; j < 5; j++)
            a *= i;
        p[i] = a;
    }
    lint sum = 0;
    for (int i = 2; i < 3e5; i++)
        if (ok(i)) 
            sum += lint(i);
    printf("%lld\n", sum);
    return 0;
}


