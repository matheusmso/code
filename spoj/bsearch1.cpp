#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int n, q, v[N];

int main() {
    scanf(" %d %d", &n, &q);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    for (int i = 0; i < q; i++) {
        int x;
        scanf(" %d", &x);
        int p = lower_bound(v, v+n, x) - v;
        if (p == n || v[p] != x)
            printf("-1\n");
        else
            printf("%d\n", p);
    }
    return 0;
}


