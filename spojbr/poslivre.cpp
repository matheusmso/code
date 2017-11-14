#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e2+7;
int g[N][N], w, h, n;

int main() {
    while (scanf(" %d %d %d", &w, &h, &n) && (w || h || n)) {
        for (int i = 1; i <= h; i++)
            for (int j = 1; j <= w; j++)
                g[i][j] = 1;
        while (n--) {
            int x1, x2, y1, y2;
            scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
            for (int i = min(y1, y2); i <= max(y1, y2); i++) 
                for (int j = min(x1, x2); j <= max(x1, x2); j++) 
                    g[i][j] = 0;
        }
        int ans = 0;
        for (int i = 1; i <= h; i++)
            for (int j = 1; j <= w; j++)
                ans += g[i][j];
        if (ans == 0)
            printf("There is no empty spots.\n");
        else if (ans == 1)
            printf("There is one empty spot.\n");
        else
            printf("There are %d empty spots.\n", ans);
    }
    return 0;
}


