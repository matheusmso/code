#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 20;
int g[N][N];
char s[N];

int main() {
    for (int i = 0; i < 20; i++) 
        for (int j = 0; j < 20; j++) {
            scanf(" %s", s);
            g[i][j] = atoi(s);
        }
    int ans = 0;
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++) {
            int p = 1;
            if (i+4 < 20) {
                for (int k = 0; k < 4; k++)
                    p *= g[i+k][j];
                ans = max(ans, p);
            }
            p = 1;
            if (j+4 < 20) {
                for (int k = 0; k < 4; k++)
                    p *= g[i][j+k];
                ans = max(ans, p);
            }
            p = 1;
            if (i+4 < 20 && j+4 < 20) {
                for (int k = 0; k < 4; k++)
                    p *= g[i+k][j+k];
                ans = max(ans, p);
            }
            p = 1;
            if (i+4 < 20 && j-4 >= 0) {
                for (int k = 0; k < 4; k++)
                    p *= g[i+k][j-k];
                ans = max(ans, p);
            }
        }
    printf("%d\n", ans);
    return 0;
}


