#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    scanf("%d", &n);
    for (int turns = 0; turns < n; turns++) {
        scanf("%d %d", &x, &y);
        int xr = 0;
        int yr = 0;
        while (x) {
            xr *= 10;
            xr += x%10;
            x /= 10;
        }
        while (y) {
            yr *= 10;
            yr += y%10;
            y /= 10;
        }
        int ans = 0;
        int rev = xr + yr;
        while (rev) {
            ans *= 10;
            ans += rev%10;
            rev /= 10;
        }
        printf("%d\n", ans);
    }
    return 0;
}


