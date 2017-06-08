#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
int n;
lint m;

int main() {
    scanf(" %d %lld", &n, &m);
    lint ans = 0;
    lint atleast = 0;
    for (int i = 0; i < n; i++) {
        lint x;
        scanf(" %lld", &x);
        if (min(m-x, x) >= atleast) {
            atleast = min(m-x, x);
            ans += min(m-x, x);
        }
        else if (max(m-x, x) >= atleast) {
            atleast = max(m-x, x);
            ans += max(m-x, x);
        }
        else {
            printf("-1\n");
            return 0;
        }
    }
    printf("%lld\n", ans);
    return 0;
}

