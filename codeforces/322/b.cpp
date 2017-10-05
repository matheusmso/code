#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
lint a, b, c;

int main() {
    scanf(" %lld %lld %lld", &a, &b, &c);
    lint ans = a/3 + b/3 + c/3;
    for (int i = 0; i < 2; i++) {
        if (a == 0 || b == 0 || c == 0) break;
        a--;
        b--;
        c--;
        ans = max(ans, i + 1 + a/3 + b/3 + c/3);
    }
    printf("%lld\n", ans);
    return 0;
}

    
