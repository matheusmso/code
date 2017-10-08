#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 2e5+7;
int bit[N], v[N], n, q;
pair<int, int> vp[N];
lint ans;

void update(int p, int val) {
    for (int i = p; i < N; i += (i & -i))
        bit[i] += val;
}

int query(int p) {
    int sum = 0;
    for (int i = p; i > 0; i -= (i & -i))
        sum += bit[i];
    return sum;
}

int main() {
    scanf(" %d %d", &n, &q);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    for (int i = 0; i < q; i++) {
        int l, r;
        scanf(" %d %d", &l, &r);
        update(l, 1);
        update(r+1, -1);
    }
    for (int i = 1; i <= n; i++) {
        vp[i-1] = {query(i), i};
    }
    sort(v, v+n);
    sort(vp, vp+n);
    for (int i = n-1; i >= 0; i--)
        ans += (lint)vp[i].first * v[i];
    printf("%lld\n", ans);
    return 0;
}
