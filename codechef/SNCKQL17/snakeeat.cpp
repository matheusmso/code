#include<bits/stdc++.h>
using namespace std;
 
typedef long long lint;
const int N = (int)1e5+7;
lint v[N], acc[N], n, t, q, lim, x;
 
int f(int p) {
    //printf ("%d %lld %lld %lld\n", p, (lim-p)*x, acc[lim], acc[p]);
    if (p >= (lim-p)*x-(acc[lim]-acc[p]))
        return 1;
    return 0;
}
 
int main() {
    scanf(" %lld", &t);
    while (t--) {
        scanf(" %lld %lld", &n, &q);
        memset(v, 0, sizeof(v));
        memset(acc, 0, sizeof(acc));
        for (int i = 0; i < n; i++)
            scanf(" %lld", v+i);
        sort(v, v+n);
        for (int i = 0; i < n; i++)
            acc[i+1] = acc[i] + v[i];
        while (q--) {
            scanf(" %lld", &x);
            int l = -1;
            int r = lower_bound(v, v+n, x)-v;
            lim = r;
            //printf("%d %d %lld\n", l, r, lim);
            while (l < r-1) {
                int mid = (l+r)/2;
                //printf("%d %d %d\n", l, mid, r);
                if (f(mid)) r = mid;
                else l = mid;
            }
            printf("%lld\n", n-r);
        }
    }
    return 0;
}

