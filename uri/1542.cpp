#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int q, d, p;

int main() {
    while (scanf(" %d", &q) && q) {
        scanf(" %d %d", &d, &p);
        int ans = (d*q*p)/abs(p-q);
        printf("%d pagina", ans);
        if (ans != 1)
            printf("s");
        printf("\n");
    }
    return 0;
}


