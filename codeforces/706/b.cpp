#include <bits/stdc++.h>
using namespace std;

int v[100007], n, t;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", &v[i]);
    sort(v, v+n);
    scanf(" %d", &t);
    while (t--) {
        int x;
        scanf(" %d", &x);
        int p = lower_bound(v, v+n, x)-v;
        int k = upper_bound(v, v+n, x)-v;
        p += k-p;
        printf("%d\n", p);
    }
    return 0;
}
