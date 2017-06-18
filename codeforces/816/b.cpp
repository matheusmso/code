#include <bits/stdc++.h>
using namespace std;

const int  N = (int)2e5+7;
int n, k, q, l[N], r[N];
int x, y, ans[N];

int main() {
    scanf(" %d %d %d", &n, &k, &q);
    for (int i = 0; i < n; i++) {
        scanf(" %d %d", &x, &y);
        l[x]++;
        r[y]++;
    }
    for (int i = N-2; i > 0; i--)
        l[i] += l[i+1];
    for (int i = 1; i < N; i++)
        r[i] += r[i-1];
    for (int i = 1; i < N; i++)
        ans[i] = (n - l[i+1] - r[i-1]) >= k;
    ans[0] = l[0];
    for (int i = 1; i < N; i++)
        ans[i] += ans[i-1];
    for (int i = 0; i < q; i++) {
        scanf(" %d %d", &x, &y);
        printf("%d\n", ans[y] - ans[x-1]);
    }
    return 0;
}

