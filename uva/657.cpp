#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int w, h, vis[N][N], vis2[N][N], t, cmp, te;
char g[N][N];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool isIn(int i, int j) {
    return i >= 0 && i < h && j >= 0 && j < w;
}

void dfs(int i, int j) {
    vis[i][j] = cmp;
    for (int o = 0; o < 4; o++) {
        int x = i+dx[o];
        int y = j+dy[o];
        if (isIn(x, y) && g[x][y] != '.' && vis[x][y] == 0)
            dfs(x, y);
    }
}

void dfs2(int i, int j, int k) {
    vis2[i][j] = 1;
    for (int o = 0; o < 4; o++) {
        int x = i+dx[o];
        int y = j+dy[o];
        if (isIn(x, y) && g[x][y] == 'X' && vis2[x][y] == 0 && vis[x][y] == k)
            dfs2(x, y, k);
    }
}

int main() {
    while (scanf(" %d %d", &w, &h) && w) {
        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++)
                scanf(" %c", &g[i][j]);
        cmp = 0;
        for (int i = 0; i < h; i++)
            for (int j = 0; j < w; j++)
                if (g[i][j] != '.' && vis[i][j] == 0) {
                    cmp++;
                    dfs(i, j);
                }
        vector<int> ans;
        for (int k = 1; k <= cmp; k++) {
            t = 0;
            for (int i = 0; i < h; i++)
                for (int j = 0; j < w; j++)
                    if (vis[i][j] == k && vis2[i][j] == 0 && g[i][j] == 'X') {
                        t++;
                        dfs2(i, j, k);
                    }
            ans.push_back(t);
        }
        sort(ans.begin(), ans.end());
        printf("Throw %d\n", ++te);
        for (int i = 0; i < ans.size(); i++)
            printf("%d%c", ans[i], " \n"[i == ans.size()-1]);
        printf("\n");
        memset(vis, 0, sizeof(vis));
        memset(vis2, 0, sizeof(vis2));
    }
    return 0;
}


