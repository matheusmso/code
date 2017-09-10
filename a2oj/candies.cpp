#include <bits/stdc++.h>
using namespace std;

int n, k, t;

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d %d", &n, &k);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x;
            scanf(" %d", &x);
            ans += x/k;
        }
        printf("%d\n", ans);
    }
    return 0;
}
