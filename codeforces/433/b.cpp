#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 1e5+7;
int v[N], u[N], n, m, x, l, r;
lint s[N][2];

int main() {
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++) {
        scanf(" %d", v+i);
        u[i] = v[i];
    }
    sort(u+1, u+n+1);
    s[0][0] = v[0];
    s[0][1] = u[0];
    for (int i = 1; i <= n; i++) {
        s[i][0] = s[i-1][0] + v[i];
        s[i][1] = s[i-1][1] + u[i];
    }
    scanf(" %d", &m);
    for (int i = 0; i < m; i++) {
        scanf(" %d %d %d", &x, &l, &r);
        printf("%lld\n", s[r][x-1] - s[l-1][x-1]);
    }
    return 0;
}
