#include <bits/stdc++.h>
using namespace std;

int l, cut[60], n;
int memo[60][60];

int cost(int i, int j) {
    if (i+1 == j)
        return 0;
    if (memo[i][j] != -1)
        return memo[i][j];
    int k = i+1;
    int sol = (int)1e9+7;
    while (k < j) {
        sol = min(sol, cost(i,k) + cost(k,j) + cut[j] - cut[i]);
        k++;
    }
    return memo[i][j] = sol;
}

int main() {
    while(scanf("%d", &l)) {
        if (l == 0)
            return 0;
        scanf("%d", &n);
        memset(memo,-1,sizeof(memo));
        for (int i = 1; i <= n; i++)
            scanf("%d", &cut[i]);
        cut[0] = 0;
        cut[n+1] = l;
        printf("The minimum cutting is %d.\n", cost(0,n+1));
    }
}

