#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
const int M = 5e4+7;
int m, n, t, v[N], dp[M];

int main() {
    while (scanf(" %d", &m) && m) {
        scanf(" %d", &n);
        for (int i = 0; i < n; i++)
            scanf(" %d", v+i);
        for (int j = 0; j <= m; j++)
            dp[j] = INF;
        dp[0] = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j <= m; j++) {
                if (j >= v[i])
                    dp[j] = min(dp[j], 1+dp[j-v[i]]);
            }
        if (dp[m] == INF) printf("Impossivel\n");
        else printf("%d\n", dp[m]);
    }
    return 0;
}


