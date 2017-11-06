#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 37;
const int M = 1e6+7;
int m, n, t, v[N], dp[M];

int main() {
    scanf(" %d", &t);
    int tt = 0;
    while (t--) {
        scanf(" %d %d", &n, &m);
        for (int i = 0; i < n; i++)
            scanf(" %d", v+i);
        for (int i = 0; i <= m; i++)
            dp[i] = i;
        for (int i = 1; i < n; i++)
            for (int j = 0; j <= m; j++) 
                if (j >= v[i])
                    dp[j] = min(dp[j], 1+dp[j-v[i]]);
        printf("%d\n", dp[m]);
    }
    return 0;
}


