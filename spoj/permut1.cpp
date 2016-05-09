#include <bits/stdc++.h>
using namespace std;

int sets, memo[15][107];

int perm(int n, int k) {
    if (n == 0)
        return 0;
    if (k == 0)
        return 1;
    if (memo[n][k] != -1)
        return memo[n][k];
    int ans = 0;
    for (int i = 0; i < n && k - 1>= 0; i++)
        ans += perm(n-1, k-i);
    return memo[n][k] = ans;
}

int main() {
    scanf("%d", &sets);
    memset(memo, -1, sizeof(memo));
    for (int i = 0; i < sets; i++) {
        int n, k;
        scanf("%d %d", &n, &k);
        printf("%d\n", perm(n,k));
    }
    return 0;
}

