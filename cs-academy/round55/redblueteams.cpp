#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, r, k, ma, mi;

int main() {
    scanf(" %d %d %d", &n, &r, &k);
    if (r+k <= n)
        ma = r+k;
    else {
        int b = n-r;
        if (b-k >= 0)
            ma = n-(b-k);
        else 
            ma = n-(k-b);
    }
    if (r-k >= 0)
        mi = r-k;
    else
        mi = k-r;
    printf("%d %d\n", mi, ma);
    return 0;
}


