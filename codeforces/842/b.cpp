#include <bits/stdc++.h>
using namespace std;

int r, d, n, ans;

double dist(int x, int y) {
    return sqrt(x*x+y*y);
}

int main() {
    scanf(" %d %d", &r, &d);
    scanf(" %d", &n);
    while (n--) {
        int x, y, k;
        scanf(" %d %d %d", &x, &y, &k);
        double p = dist(x, y);
        if (p-k >= r-d && p+k <= r)
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}

