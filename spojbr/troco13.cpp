#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int v, m, dp[N];

int main() {
    scanf(" %d %d", &v, &m);
    dp[0] = 1;
    for (int i = 0; i < m; i++) {
        int x;
        scanf(" %d", &x);
        for (int j = v; j >= x; j--)
            if (dp[j-x])
                dp[j] = 1;
    }
    printf("%c\n", dp[v] ? 'S' : 'N');
    return 0;
}


