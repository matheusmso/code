#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 7e1+7;
int g[N][N], n;

int main() {
    while (scanf(" %d", &n) != EOF) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                g[i][j] = 3;
        for (int i = 0; i < n; i++)
            g[i][i] = 1;
        for (int i = 0; i < n; i++)
            g[i][n-i-1] = 2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                printf("%d", g[i][j]);
            printf("\n");
        }
    }
    return 0;
}


