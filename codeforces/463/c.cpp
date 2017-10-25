#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e3+7;
int n, v[N][N];
lint md[2*N], sd[2*N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %d", &v[i][j]);
            md[i+j] += (lint)v[i][j];
            sd[i-j+n] += (lint)v[i][j];
        }
    }
    lint besta = -LINF;
    lint bestb = -LINF;
    int xa, ya;
    int xb, yb;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            lint t = md[i+j] + sd[i-j+n] - v[i][j];
            if ((i+j)%2 == 0) {
                if (t > besta) {
                    besta = t;
                    xa = i+1;
                    ya = j+1;
                }
            }
            else {
                if (t > bestb) {
                    bestb = t;
                    xb = i+1;
                    yb = j+1;
                }
            }
        }
    }
    printf("%lld\n", besta+bestb);
    printf("%d %d %d %d\n", xa, ya, xb, yb);
    return 0;
}


