#include <bits/stdc++.h>
using namespace std;

int n, ans, cur;

int main() {
    scanf(" %d", &n);
    while (n--) {
        int x, y;
        scanf(" %d %d", &x, &y);
        cur -= x;
        cur += y;
        ans = max(ans, cur);
    }
    printf("%d\n", ans);
    return 0;
}


