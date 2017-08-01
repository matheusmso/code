#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int bit[N][N], t, n;

int query(int x, int y) {
    int ans = 0;
    for (int i = x; i > 0; i -= i&-i)
        for (int j = y; j > 0; j-= j&-j)
            ans = max(ans, bit[i][j]);
    return ans;
}

void update(int x, int y, int k) {
    for (int i = x; i < N; i += i&-i)
        for (int j = y; j < N; j += j&-j)
            bit[i][j] = max(k, bit[i][j]);
}

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d", &n);
        memset(bit, 0, sizeof(bit));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            int k = query(x, y);
            update(x, y, k+1);
            ans = max(ans, k+1);
        }
        printf("%d\n", ans);
    }
    return 0;
}

