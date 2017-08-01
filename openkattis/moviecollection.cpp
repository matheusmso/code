#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int m, r, pos[N], b[2*N], t, ff;

void update(int x, int y) {
    while (x < m+r+7) {
        b[x] += y;
        x += (x & -x);
    }
}

int query(int x) {
    int sum = 0;
    while (x > 0) {
        sum += b[x];
        x -= (x & -x);
    }
    return sum;
}

int main() {
    scanf(" %d", &t);
    while (t--) {
        for (int i = 0; i <= m+r+7; i++)
            b[i] = 0;
        scanf(" %d %d", &m, &r);
        ff = m+1;
        for (int i = 1; i <= m; i++) {
            pos[i] = m+1-i;
            update(pos[i], 1);
        }
        /*printf("debug\n");
        for (int i = 0; i <= m; i++)
            printf("pos[%d] = %d\n", i, pos[i]);
        for (int i = 0; i <= ff; i++)
            printf("bit[%d] = %d\n", i, b[i]);*/
        for (int i = 0; i < r; i++) {
            int x;
            scanf("%d", &x);
            int ans = query(ff-1) - query(pos[x]);
            printf("%d ", ans);
            update(pos[x], -1);
            pos[x] = ff++;
            update(pos[x], 1);
        }
        printf("\n");
    }
    return 0;
}

