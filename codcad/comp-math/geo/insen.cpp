#include <bits/stdc++.h>
using namespace std;

int x[2], y[2];

int dist(int x0, int y0, int x1, int y1) {
    return abs(x1-x0)*abs(x1-x0)+abs(y1-y0)*abs(y1-y0);
}

int main() {
    int n;
    scanf(" %d", &n);
    int ans = 0;
    while (n--) {
        for (int i = 0; i < 2; i++)
            scanf(" %d %d", &x[i], &y[i]);
        ans += dist(x[0], y[0], x[1], y[1]);
    }
    printf("%d\n", ans);
    return 0;
}

