#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
lint x;

int main() {
    scanf(" %lld", &x);
    int ans = 0;
    while (x > 0) {
        if (x & -x)
            ans++;
        x -= x & -x;
    }
    printf("%d\n", ans);
    return 0;
}

