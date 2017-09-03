#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
int n, k;

int main() {
    scanf(" %d %d", &n, &k);
    int ans = -INF;
    while (n--) {
        int f, t;
        scanf(" %d %d", &f, &t);
        if (t <= k) ans = max(ans, f);
        else ans = max(ans, f-t+k);
    }
    printf("%d\n", ans);
    return 0;
}


