#include <bits/stdc++.h>
using namespace std;

const int N = 3e3+7;
int n, v, d[N];

int main() {
    scanf(" %d %d", &n, &v);
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf(" %d %d", &a, &b);
        d[a] += b;
    }
    int ans = 0;
    for (int i = 1; i < N; i++) {
        int can = v;
        int yest = min(can, d[i-1]);
        ans += yest;
        can -= yest;
        int today = min(can, d[i]);
        ans += today;
        d[i] -= today;
    }
    printf("%d\n", ans);
    return 0;
}

        
