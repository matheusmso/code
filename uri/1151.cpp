#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

lint a, b, c;

int main() {
    int n;
    scanf(" %d", &n);
    b = 1;
    for (int i = 0 ; i < n; i++) {
        if (i)
            printf(" ");
        printf("%lld", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}


