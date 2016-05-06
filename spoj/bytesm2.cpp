#include <bits/stdc++.h>
using namespace std;

int n, t[107][107];
int h, w;
int memo[107][107];

int pd(int row, int col) {
    if (col == 0 || col == w+1)
        return -999999999;
    if (row == h)
        return t[row][col];
    if (memo[row][col] != -1)
        return memo[row][col];
    int k = max(max(pd(row+1, col-1), pd(row+1, col)),pd(row+1, col+1));
    return memo[row][col] = t[row][col] + k;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &h, &w);
        for (int x = 1; x <= h; x++)
            for (int y = 1; y <= w; y++)
                scanf("%d", &t[x][y]);
        for (int x = 0; x <= h + 1; x++)
            t[x][0] = t[x][w+1] = -999999999;
        int x = 1;
        int m = -999999999;
        memset(memo, -1, sizeof (memo));
        while (x <= w) {
            m = max(m, pd(1, x));
            x++;
        }
        printf("%d\n", m);
    }
    return 0;
}

