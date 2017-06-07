#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n, m, a[N], f[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i < n; i++)
        scanf(" %d", a+i);
    for (int i = 0; i < n; i++)
        scanf(" %d", f+i);
    for (int i = 0; i < m; i++) {
        int x;
        scanf(" %d", &x);
        int p = upper_bound(a, a+n, x)-a-1;
        printf("%d ", f[p]);
    }
    printf("\n");
    return 0;
}

