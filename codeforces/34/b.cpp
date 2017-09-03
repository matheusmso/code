#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
int n, m, v[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++) 
        scanf(" %d", v+i);
    sort(v, v+n);
    int ans = 0;
    for (int i = 0; i < m; i++) {
        if (v[i] >= 0) break;
        ans -= v[i];
    }
    printf("%d\n", ans);
    return 0;
}


