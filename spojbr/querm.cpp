#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, t;

int main() {
    while (scanf(" %d", &n) && n) {
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            scanf(" %d", &x);
            if (x == i)
                ans = i;
        }
        printf("Teste %d\n", ++t);
        printf("%d\n\n", ans);
    }
    return 0;
}


