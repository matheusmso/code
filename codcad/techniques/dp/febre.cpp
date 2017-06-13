#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = (int)1e3+7;
int n, k;
lint f[N], a[N], m;

lint solve(int x) {
    if (f[x] != -1) return f[x];
    lint ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (ans + (a[i] * solve(x-i)%m))%m;
    }
    return f[x] = ans;
}

int main() {
    scanf(" %d %d %lld", &n, &k, &m);
    for (int i = 1; i <= n; i++)
        scanf(" %lld", a+i);
    memset(f, -1, sizeof(f));
    for (int i = 1; i <= n; i++)
        scanf(" %lld", f+i);
    printf("%lld\n", solve(k));
    return 0;
}

