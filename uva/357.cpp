#include <bits/stdc++.h>
using namespace std;

int n;
int value[5] = {1, 5, 10, 25, 50};
long long int memo[7][30007];

long long int ways(int coin, int total) {
    if (total == 0)
        return 1;
    if (coin == 5)
        return 0;
    if (memo[coin][total] != -1)
        return memo[coin][total];
    long long int used = 0, unused;
    if (value[coin] <= total)
        used = ways(coin, total-value[coin]);
    unused = ways(coin+1, total);
    return memo[coin][total] = used + unused;
}

int main() {
    memset(memo,-1,sizeof(memo));
    while(scanf("%d", &n) != EOF) {
        long long int m = ways(0, n);
        if (m == 1)
            printf("There is only %lld way to produce %d cents change.\n", m, n);
        else
            printf("There are %lld ways to produce %d cents change.\n", m, n);
    }
    return 0;
}

