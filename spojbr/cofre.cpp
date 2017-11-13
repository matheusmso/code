#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, a, b, t;

int main() {
    while (scanf(" %d", &n) && n) {
        a = b = 0;
        printf("Teste %d\n", ++t);
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            a += x;
            b += y;
            printf("%d\n", a-b);
        }
        printf("\n");
    }
    return 0;
}


