#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e3+7;
int c, n, t, m, v[N];

int main() {
    scanf(" %d", &c);
    for (int te = 0; te < c; te++) {
        scanf(" %d %d %d", &n, &t, &m);
        for (int i = 0; i < m; i++) 
            scanf(" %d", v+i);
        int k = 0;
        int p = 0;
        if (m%n == 0) {
            k = v[n-1]+2*t;
            p = n;
        }
        else {
            k = v[m%n-1]+2*t;
            p = m%n;
        }
        while (p < m) {
            if (v[p+n-1] <= k) k += 2*t;
            else k = v[p+n-1]+2*t;
            p += n;
        }
        printf("%d %d\n", k-t, (m+n-1)/n);
    }
    return 0;
}


