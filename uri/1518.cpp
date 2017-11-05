#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int x[4], y[4], c[4];

int main() {
    while (scanf(" %d %d", &x[0], &y[0]) && x[0]) {
        for (int i = 1; i <= 3; i++)
            scanf(" %d %d %c", &x[i], &y[i], &c[i]);
        int ans = INF;
        for (int i = 1; i <= 3; i++)
            for (int j = 1; j <= 3; j++) {
                if (i == j) continue;
                int aux;
                int cur = 0;
                int k = 6-i-j;
                int xx[4], yy[4];
                for (int i = 0; i <= 3; i++) {
                    xx[i] = x[i];
                    yy[i] = y[i];
                }
                if (c[i] == 'C') {

                }
                aux = abs(xx[i] - xx[0]) + abs(yy[i] - yy[0]);
                aux = (aux+1)/2;
                cur += aux;
                if (c[j] == 'C') yy[j] += aux;
                else xx[j] += aux;
                if (c[k] == 'C') yy[k] += aux;
                else xx[k] += aux;
                aux = abs(xx[j] - xx[i]) + abs(yy[j] - yy[i]);
                aux = (aux+1)/2;
                cur += aux;
                if (c[k] == 'C') yy[k] += aux;
                else xx[k] += aux;
                aux = abs(xx[k] - xx[j]) + abs(yy[k] - yy[j]);
                aux = (aux+1)/2;
                cur += aux;
                ans = min(ans, cur);
            }
        printf("%d\n", ans);
    }
    return 0;
}


