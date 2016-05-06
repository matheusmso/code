#include <bits/stdc++.h>
using namespace std;

int n, potion[107];
int memo[107][107];
int color[107][107];

int smoke(int i, int j) {
    if (i == j) {
        return 0;
    }
    if (memo[i][j] != -1) 
        return memo[i][j];
    int sol = (int) 1e9+7;
    int k = i;
    while (k < j) {
        sol = min(sol, smoke(i, k) + smoke(k+1, j) + 
                color[i][k]*color[k+1][j]);
        k++;
    }
    return memo[i][j] = sol;
}

int main() {
    while (scanf("%d", &n) != EOF) {
        for(int i = 0; i < n; i++)
            scanf("%d", &potion[i]);
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (i == j)
                    color[i][j] = potion[i];
                else
                    color[i][j] = (color[i][j-1] + potion[j])%100;
            }
        }
        memset(memo, -1, sizeof(memo));
        printf("%d\n", smoke(0, n-1));
    }
    return 0;
}

