#include <bits/stdc++.h>
using namespace std;
const int maxn = 50;
int n, memo[maxn][maxn], s, k, v[maxn];

int br(int i, int j) {

    if (j < 0)
        return 0;
    if (i == 2*n)
        return !j;
    if (memo[i][j] != -1)
        return memo[i][j];
    if (v[i] == 0)
        memo[i][j] = br(i+1,j-1) + br(i+1, j+1);
    else 
        memo[i][j] = br(i+1,j+1);
    return memo[i][j];
}

int main() {
    scanf("%d", &s);
    for (int i = 0; i < s; i++) {
        memset(memo, -1, sizeof(memo));
        scanf("%d %d", &n, &k);
        for (int j = 0; j < 2*n; j++)
            v[j] = 0;
        for (int j = 0; j < k; j++) {
            int x;
            scanf("%d", &x);
            v[--x] = 1;
        }
        printf("%d\n", br(0,0));
    }
    return 0;
}


