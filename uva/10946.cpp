#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e1+7;
int x, y, t, vis[N][N], s;
char g[N][N];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool isIn(int i, int j) {
    return i >= 0 && i < x && j >= 0 && j < y;
}

void dfs(int i, int j) {
    vis[i][j] = 1;
    s++;
    for (int o = 0; o < 4; o++) {
        int a = i+dx[o];
        int b = j+dy[o];
        if (isIn(a, b) && g[a][b] == g[i][j] && vis[a][b] == 0) 
            dfs(a, b);
    }
}

int main() {
    while (scanf(" %d %d", &x, &y) && x) {
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < x; i++)
            for (int j = 0; j < y; j++)
                scanf(" %c", &g[i][j]);
        vector<pair<int, int>> v;
        for (int i = 0; i < x; i++)
            for (int j = 0; j < y; j++)
                if (g[i][j] != '.' && vis[i][j] == 0) {
                    s = 0;
                    dfs(i, j);
                    v.push_back({s, -(g[i][j]-'A')});
                }
        sort(v.begin(), v.end());
        printf("Problem %d:\n", ++t);
        for (int i = v.size()-1; i >= 0; i--) 
            printf("%c %d\n", -v[i].second+'A', v[i].first);
    }
    return 0;
}


