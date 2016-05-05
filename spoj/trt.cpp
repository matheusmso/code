#include <bits/stdc++.h>
using namespace std;

int n, value[2007];
int memo[2007][2007];

int revenue(int i, int j) {
    if (i > j)
        return 0;
    if (memo[i][j] != -1)
        return memo[i][j];
    int front = (i+n-j)*value[i] + revenue(i+1, j);
    int back = (i+n-j)*value[j] + revenue(i, j-1);
    return memo[i][j] = max(front, back);
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &value[i]);
    memset(memo, -1, sizeof(memo));
    printf("%d\n", revenue(1, n));
    return 0;
}

