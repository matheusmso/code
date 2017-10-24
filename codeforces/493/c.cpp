#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e5+7;
int n, m, a[N], b[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", a+i);
    scanf(" %d", &m);
    for (int i = 0; i < m; i++)
        scanf(" %d", b+i);
    sort(a, a+n);
    sort(b, b+m);
    int best = -INF;
    int ba, bb;
    for (int i = 0; i < n; i++) {
        int pb = lower_bound(b, b+m, a[i]) - b;
        int pa = lower_bound(a, a+n, a[i]) - a;
        int cb = (m-pb)*3 + pb*2;
        int ca = pa*2 + (n-pa)*3;
        if (ca - cb > best) {
            best = ca-cb;
            ba = ca;
            bb = cb;
        }
    }
    for (int i = 0; i < m; i++) {
        int pa = lower_bound(a, a+n, b[i]) - a;
        int pb = lower_bound(b, b+m, b[i]) - b;
        int ca = (n-pa)*3 + pa*2;
        int cb = pb*2 + (m-pb)*3;
        if (ca - cb > best) {
            best = ca-cb;
            ba = ca;
            bb = cb;
        }
    }
    if (2*n - 2*m > best) {
        ba = 2*n;
        bb = 2*m;
    }
    printf("%d:%d\n", ba, bb);
    return 0;
}


