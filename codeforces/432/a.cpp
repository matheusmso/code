#include <bits/stdc++.h>
using namespace std;

int n, k, ans;

int main() {
    scanf(" %d %d", &n, &k);
    k = 5-k;
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        if (x <= k) ans++;
    }
    printf("%d\n", ans/3);
    return 0;
}

