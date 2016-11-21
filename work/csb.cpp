#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e5+7;
typedef long long lint;
int n;

int main() {
    scanf(" %d", &n);
    lint ans = 0;
    lint count = 0;
    for (int i = 0; i < n; i++) {
        lint x;
        scanf(" %lld", &x);
        if (x == 0) {
            ans += ((count+1)*count)/2;
            count = 0;
        }
        else count++;
    }
    if (count)
        ans +=((count+1)*count)/2;
    printf("%lld\n", ans);
    return 0;
}

