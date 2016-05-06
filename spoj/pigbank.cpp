#include <bits/stdc++.h>
using namespace std;

int t, e, f, n;
int p[507];
int w[507];
int memo[507][10007];

int pd(int x, int vol) {
    if (vol == 0)
        return 0;
    if (x == n)
        return 999999999;
    if (memo[x][vol] > -1)
        return memo[x][vol];
    int r1, r2;
    r1 = r2 = 999999999;
    if (w[x] <= vol) 
        r1 = p[x] + pd(x, vol - w[x]);
    r2 = pd(x+1, vol);
    return memo[x][vol] = min(r1,r2);
}

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &e, &f, &n);
        for (int j = 0; j < n; j++)
            scanf("%d %d", &p[j], &w[j]);
        memset(memo, -1, sizeof(memo));
        int k = pd(0, f-e);
        if (k == 999999999)
            printf("This is impossible.\n");
        else
            printf("The minimum amount of money in the piggy-bank is %d.\n", k);
    }
    return 0;
}


