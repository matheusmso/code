#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int g[N][N], dp[N][N];
char s[N*N];

int main() {
    int p = 0;
    while (scanf(" %s", s) != EOF) {
        char *t = strtok(s, ", ");
        while (t != NULL) {
            g[p/80][p%80] = atoi(t);
            p++;
            t = strtok(NULL, ", ");
        }
    }
    for (int i = 0; i < 80; i++) {
        dp[0][i] = g[0][i];
        if (i > 0)
            dp[0][i] += dp[0][i-1];
    }
    for (int i = 1; i < 80; i++)
        for (int j = 0; j < 80; j++) {
            if (j == 0)
                dp[i][j] = dp[i-1][j] + g[i][j];
            else {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]);
                dp[i][j] += g[i][j];
            }
        }
    printf("%d\n", dp[79][79]);
    return 0;
}


