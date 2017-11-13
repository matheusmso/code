#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e1+7;
int n, g[10][10];

int main() {
    scanf(" %d", &n);
    while (n--) {
        for (int i = 0; i <= 8; i += 2)
            for (int j = 0; j <= i; j += 2)
                scanf(" %d", &g[i][j]);
        for (int i = 2; i <= 8; i += 2)
            for (int j = 0; j+2 <= i; j += 2) {
                int a = g[i][j] + g[i][j+2];
                a = g[i-2][j] - a;
                a /= 2;
                g[i][j+1] = a;
                g[i-1][j] = g[i][j] + g[i][j+1];
                g[i-1][j+1] = g[i][j+1] + g[i][j+2];
            }
        for (int i = 0; i < 9; i++) 
            for (int j = 0; j <= i; j++)
                printf("%d%c", g[i][j], " \n"[j == i]);
    }
    return 0;
}


