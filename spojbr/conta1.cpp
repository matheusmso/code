#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, ans;

int main() {
    scanf(" %d", &n);
    if (n > 100) {
        ans += 5 * (n-100);
        n = 100;
    }
    if (n > 30) {
        ans += 2 * (n-30);
        n = 30;
    }
    if (n > 10) {
        ans += n-10;
        n = 10;
    }
    ans += 7;
    printf("%d\n", ans);
    return 0;
}


