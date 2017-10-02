#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
int b[N], a[N], n;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        a[i] = x;
        b[i] = y;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int k = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (b[j] == a[i]) {
                k = 0;
                break;
            }
        }
        ans += k;
    }
    printf("%d\n", ans);
    return 0;
}
