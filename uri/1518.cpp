#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int x[4], y[4], c[4];

int dist(int ox, int oy, int dx, int dy) {
    return abs(dx-ox) + abs(dy-oy);
}

int solve(int ox, int oy, int dx, int dy, char ch) {
    int l, h;
    l = 1;
    h = 1e6;
    while (l <= h) {
        int mid = (l+h)/2;
        if (ch == 'C') {
            int xx = abs(dx-ox);
            int yy = abs(dy+mid-oy);
            int a1 = min(xx, yy) + (abs(xx-yy)+1)/2;
            int a2 = mid;
            if (a1 <= a2) h = mid-1;
            else l = mid+1;
        }
        else {
            int xx = abs(dx+mid-ox);
            int yy = abs(dy-oy);
            int a1 = min(xx, yy) + (abs(xx-yy)+1)/2;
            int a2 = mid;
            if (a1 <= a2) h = mid-1;
            else l = mid+1;
        }
    }
    return l;
}

int main() {
    while (scanf(" %d %d", &x[0], &y[0]) && x[0]) {
        for (int i = 1; i <= 3; i++)
            scanf(" %d %d %c", &x[i], &y[i], &c[i]);
        int ans = INF;
        for (int i = 1; i <= 3; i++)
            for (int j = 1; j <= 3; j++) {
                if (i == j) continue;
                int cur = 0;
                int k = 6-i-j;
                int xx[4], yy[4];
                for (int ii = 0; ii <= 3; ii++) {
                    xx[ii] = x[ii];
                    yy[ii] = y[ii];
                }
                int t = solve(xx[0], yy[0], xx[i], yy[i], c[i]);
                cur += t;
                if (c[i] == 'C') yy[i] += t;
                else xx[i] += t;
                if (c[j] == 'C') yy[j] += t;
                else xx[j] += t;
                if (c[k] == 'C') yy[k] += t;
                else xx[k] += t;
                t = solve(xx[i], yy[i], xx[j], yy[j], c[j]);
                cur += t;
                if (c[j] == 'C') yy[j] += t;
                else xx[j] += t;
                if (c[k] == 'C') yy[k] += t;
                else xx[k] += t;
                t = solve(xx[j], yy[j], xx[k], yy[k], c[k]);
                cur += t;
                ans = min(ans, cur);
            }
        printf("%d\n", ans);
    }
    return 0;
}


