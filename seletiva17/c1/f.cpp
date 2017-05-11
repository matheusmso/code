#include <bits/stdc++.h>
using namespace std;

const int N = (int)2e4;
const int inf = 0x7f7f7f7f;

int t, n, k, v[N];

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d %d", &n, &k);
        for (int i = 0; i < n; i++)
            scanf(" %d", v+i);
        sort(v, v+n);
        int ans = inf;
        for (int i = 0; i+k-1 < n; i++) {
            ans = min(ans, v[i+k-1]-v[i]);
        }
        printf("%d\n", ans);
    }
    return 0;
}

