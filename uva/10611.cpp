#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e4+7;
int v[N], n, q;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) 
        scanf(" %d", v+i);
    scanf(" %d", &q);
    for (int i = 0; i < q; i++) {
        int x;
        scanf(" %d", &x);
        int p = lower_bound(v, v+n, x) - v;
        if (p == 0) printf("X ");
        else printf("%d ", v[--p]);
        p = upper_bound(v, v+n, x) - v;
        if (p != n)
            printf("%d\n", v[p]);
        else
            printf("X\n");
    }
    return 0;
}


