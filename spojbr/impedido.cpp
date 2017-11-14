#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int a[2], d[11];
int n, m;

int main() {
    while (scanf(" %d %d", &n, &m) && (n || m)) {
        for (int i = 0; i < n; i++)
            scanf(" %d", a+i);
        for (int i = 0; i < m; i++)
            scanf(" %d", d+i);
        sort(d, d+m);
        sort(a, a+n);
        bool ok = true;
        if (a[0] < d[1] || m == 1) ok = false;
        printf("%c\n", ok ? 'N' : 'Y');
    }
    return 0;
}


