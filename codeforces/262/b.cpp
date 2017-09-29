#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, k, v[N], neg, lowest;

int main() {
    scanf(" %d %d", &n, &k);
    lowest = 0x3f3f3f3f;
    for (int i = 0; i < n; i++) {
        scanf(" %d", v+i);
        if (v[i] < 0) neg++;
        lowest = min(lowest, abs(v[i]));
    }
    for (int i = 0; i < min(k, neg); i++)
        v[i] = -v[i];
    int ans = 0;
    if (k > neg) {
        k -= neg;
        if (k % 2 == 1) ans -= 2*lowest;
    }
    for (int i = 0; i < n; i++)
        ans += v[i];
    printf("%d\n", ans);
    return 0;
}
