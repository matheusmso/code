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
        int l, r, t, b;
        l = t = 0;
        r = b = n;
        int tt = 1;
        while (l < r && t < b) {
            for (int i = l; i < r; i++)
                g[t][i] = tt;
            r--;
            for (int i = t+1; i < b; i++)
                g[i][r] = tt;
            b--;
            for (int i = r; i >= l; i--)
                g[b][i] = tt;
            for (int i = b; i > t; i--)
                g[i][l] = tt;
            l++;
            t++;
            tt++;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                printf("%3d%c", g[i][j], " \n"[j == n-1]);
        printf("\n");
    }
    return 0;
}


