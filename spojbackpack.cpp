#include <bits/stdc++.h>
using namespace std;

int vmax, n;
int v[100], c[100], u[100];
int memo[100][1000];
int r1, r2;

int pd(int i, int vol) {
    if (i == n)
        return 0;
    if (memo[i][vol/10] != 0)
        return memo[i][vol/10];
    r1 = r2 = 999999999;
    if (v[i] <= vol)
        r1 = c[i]*v[i] + pd (i+1, vol - v[i]);
    r2 = pd(i+1, vol);
    int ans = max(r1, r2);
    memo[i][vol/10] = ans;
    return ans;
}

int main() {
    int k;
    scanf("%d", &k);
    while (k--) {
        scanf("%d %d", &vmax, &n);
        for (int i = 0; i < n; i++)
            scanf("%d %d %d", &v[i], &c[i], &u[i]);
    }
    return 0;
}

