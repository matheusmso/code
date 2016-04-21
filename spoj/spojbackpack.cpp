#include <bits/stdc++.h>
using namespace std;

int vmax, n, t;
int v[67][3], c[67][3];
int memo[67][3207];

int pd(int i, int vol) {
    if (i == n+1)
        return 0;
    if (memo[i][vol/10] > -1)
        return memo[i][vol/10];
    int r1, r2;
    r1 = r2 = -999999999;
    if (v[i][0] <= vol) {
        int t1, t2, t3, t4;
        t1 = t2 = t3 = t4 = -999999999;
        t1 = c[i][0]*v[i][0] + pd (i+1, vol - v[i][0]);
        if (v[i][1] != 0 && v[i][0] + v[i][1] <= vol)
            t2 = c[i][0]*v[i][0] + c[i][1]*v[i][1] + pd (i+1, vol - v[i][0] - v[i][1]);
        if (v[i][2] != 0 && v[i][0] + v[i][2] <= vol)
            t3 = c[i][0]*v[i][0] + c[i][2]*v[i][2] + pd (i+1, vol - v[i][0] - v[i][2]);
        if (v[i][1] != 0 && v[i][2] != 0 && v[i][0] + v[i][1] + v[i][2] <= vol)
            t4 = c[i][0]*v[i][0] + c[i][1]*v[i][1] + c[i][2]*v[i][2] + pd (i+1, vol - v[i][0] - v[i][1] - v[i][2]);
        r1 = max(max(t1, t2), max(t3, t4));
    }
    r2 = pd(i+1, vol);
    return memo[i][vol/10] = max(r1, r2);
}

int main() {
    int k;
    scanf("%d", &k);
    while (k--) {
        scanf("%d %d", &vmax, &n);
        memset(v, 0, sizeof (v));
        memset(c, 0, sizeof (c));
        memset(memo, -1, sizeof (memo));
        for (int i = 1; i <= n; i++) {
            int vol, imp, u;
            scanf("%d %d %d", &vol, &imp, &u);
            if (u == 0) {
                v[i][0] = vol;
                c[i][0] = imp;
            }
            else {
                if (v[u][1] != 0) {
                    v[u][2] = vol;
                    c[u][2] = imp;
                }
                else {
                    v[u][1] = vol;
                    c[u][1] = imp;
                }
            }
        }
        printf("%d\n", pd(1, vmax));
    }
    return 0;
}

