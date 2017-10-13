#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
int n, m, k, t[N][N], r[N], c[N];

int main() {
    scanf(" %d %d %d", &n, &m, &k);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf(" %d", &t[i][j]);
    for (int i = 1; i <= n; i++)
        r[i] = i;
    for (int i = 1; i <= m; i++)
        c[i] = i;
    while (k--) {
        char s;
        int x, y;
        scanf(" %c %d %d", &s, &x, &y);
        if (s == 'c')
            swap(c[x], c[y]);
        else if (s == 'r')
            swap(r[x], r[y]);
        else 
            printf("%d\n", t[r[x]][c[y]]);
    }
    return 0;
}


