#include <bits/stdc++.h>
using namespace std;

int n, x, b, w;

int main() {
    scanf(" %d", &n);
    int ans = 0;
    scanf(" %d", &b);
    w = b;
    n--;
    while (n--) {
        scanf(" %d", &x);
        if (x < w) {
            w = x;
            ans++;
        }
        else if (x > b) {
            b = x;
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
