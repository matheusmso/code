#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int g[N][N], n, m;
map<int, int> bst;

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            char c;
            scanf(" %c", &c);
            g[i][j] = c-'0';
        }
    for (int j = 0; j < m; j++) {
        int k = -1;
        for (int i = 0; i < n; i++)
            k = max(k, g[i][j]);
        for (int i = 0; i < n; i++)
            if (g[i][j] == k)
                bst[i]++;
    }
    printf("%d\n", bst.size());
    return 0;
}


