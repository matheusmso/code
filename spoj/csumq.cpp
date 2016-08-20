#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
const int N = (int)1e5+7;
lint st[N][20], n, v[N];

void init() {
    for (lint i = n-1; i >= 0; i--) {
        st[i][0] = v[i];
        for (lint j = 1; j < 20; j++) {
            if (i+(1<<j)-1 < n)
                st[i][j] = st[i][j-1] + st[i+(1<<(j-1))][j-1];
            else
                break;
        }
    }
}

lint query(int l, int r) {
    lint ans = 0;
    for (lint i = 20; i >= 0 && l <= r; i--) {
        if (l+(1<<i)-1 <= r) {
            ans += st[l][i];
            l += (1<<i);
        }
    }
    return ans;
}

int main() {
    scanf(" %lld", &n);
    for (int i = 0; i < n; i++)
        scanf(" %lld", &v[i]);
    init();
    int q;
    scanf(" %d", &q);
    while (q--) {
        int l, r;
        scanf(" %d %d", &l, &r);
        printf("%lld\n", query(l, r));
    }
    return 0;
}
