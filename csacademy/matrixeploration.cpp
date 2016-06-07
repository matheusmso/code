#include <bits/stdc++.h>
using namespace std;

int n, m, k, me[1007][1007];
int memo[1007][1007];

int pd(int i, int j) {
    if (i >= n || j >= m || i < 0 || j < 0)
        return 0;
    if (memo[i][j] != -1)
        return memo[i][j];
    int ma = me[i][j] + 
        min(min(pd(i+1,j),pd(i-1,j)),min(pd(i,j+1),pd(i,j-1)));
    return memo[i][j] = ma;
}

int main() {
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            scanf("%c", &c);
            if (c == '.') me[i][j] = 1;
            else me[i][j] = 99999999;
        }
    }
    for (int i = 0; i < k; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        printf("%d\n", pd(x-1,y-1));
    }
    return 0;
}

