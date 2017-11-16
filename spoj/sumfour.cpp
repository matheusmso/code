#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 4e3+7;
int a[N], b[N], c[N], d[N], aa[N*N], bb[N*N], n;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d %d %d %d", a+i, b+i, c+i, d+i);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            aa[i*n+j] = a[i] + b[j];
            bb[i*n+j] = c[i] + d[j];
        }
    n *= n;
    sort(aa, aa+n);
    sort(bb, bb+n);
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += upper_bound(bb, bb+n, -aa[i]) - lower_bound(bb, bb+n, -aa[i]);
    printf("%d\n", ans);
    return 0;
}


