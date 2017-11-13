#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int g[N][N], n;

int main() {
    while (scanf(" %d", &n) && n) {
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++)
                g[i][j] = j-i+1;
            for (int j = i; j >= 0; j--)
                g[i][j] = i-j+1;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                printf("%3d%c", g[i][j], " \n"[j == n-1]);
        printf("\n");
    }
    return 0;
}


