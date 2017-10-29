#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e2+7;
int g[N][N], n, m, x, y, k, ans;
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

bool isIn(int i, int j) {
    return i >= 1 && i <= n && j >= 1 && j <= m;
}

void dfs(int i, int j) {
    g[i][j] = 1;
    ans++;
    for (int o = 0; o < 8; o++) {
        int a = i + dx[o];
        int b = j + dy[o];
        if (isIn(a, b) && g[a][b] == 0)
            dfs(i+dx[o], j + dy[o]);
    }
}

int main() {
    scanf(" %d %d %d %d %d", &n, &m, &x, &y, &k);
    for (int i = 0; i < k; i++) {
        int a, b;
        scanf(" %d %d", &a, &b);
        g[a][b] = 1;
    }
    dfs(x, y);
    printf("%d\n", ans);
    return 0;
}


