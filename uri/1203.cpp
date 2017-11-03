#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int r, k, dp[N], v[N];

int main() {
    while (scanf(" %d %d", &r, &k) != EOF) {
        memset(v, 0, sizeof(v));
        memset(dp, 0, sizeof(dp));
        for (int i = 0; i < k; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            v[x]++;
            v[y]++;
        }
        dp[0] = 1;
        for (int i = 0; i < r; i++)
            for (int j = k; j >= v[i]; j--)
                if (dp[j-v[i]])
                    dp[j] = 1;
        printf("%c\n", dp[k] ? 'S' : 'N');
    }
    return 0;
}


