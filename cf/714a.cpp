#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
int main() {
    lint l1, r1, l2, r2, k;
    scanf(" %lld %lld %lld %lld %lld", &l1, &r1, &l2, &r2, &k);
    lint l = max(l1, l2);
    lint r = min (r1, r2);
    if (r < l) {
        printf("0\n");
        return 0;
    }
    lint a = r-l+1ll;
    if (k <= r && k >= l)
        a--;
    printf("%lld\n", a);
    return 0;
}


