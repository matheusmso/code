#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 1e5+7;
int h, w, n, m;
int x[N], y[N];
map<int, int> ma;

int main() {
    scanf(" %d %d %d %d", &h, &w, &n, &m);
    for (int i = 1; i <= n; i++)
        scanf(" %d", y+i);
    for (int i = 1; i <= m; i++)
        scanf(" %d", x+i);
    sort(x, x+m+1);
    sort(y, y+n+1);
    y[++n] = h;
    x[++m] = w;
    for (int i = 1; i <= n; i++) {
        ma[y[i]-y[i-1]]++;
    }
    lint ans = 0;
    for (int i = 1; i <= m; i++) {
        ans += ma[x[i]-x[i-1]];
    }
    printf("%lld\n", ans);
    return 0;
}


