#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n, m, s, sx, sy, dir;
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
char g[N][N];
char sw[] = {'N', 'L', 'S', 'O'};

bool isIn(int y, int x) {
    return y >= 0 && y < n && x >= 0 && x < m;
}

int main() {
    while (scanf(" %d %d %d", &n, &m, &s) && (n || m || s)) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                scanf(" %c", &g[i][j]);
                if (isalpha(g[i][j])) {
                    sx = j;
                    sy = i;
                }
            }
        if (g[sy][sx] == 'N') dir = 0;
        else if (g[sy][sx] == 'L') dir = 1;
        else if (g[sy][sx] == 'S') dir = 2;
        else dir = 3;
        int ans = 0;
        for (int i = 0; i < s; i++) {
            char c;
            scanf(" %c", &c);
            if (c == 'F') {
                if (isIn(sy+dy[dir], sx+dx[dir]) && g[sy+dy[dir]][sx+dx[dir]] != '#') {
                    if (g[sy+dy[dir]][sx+dx[dir]] == '*') {
                        ans++;
                        g[sy+dy[dir]][sx+dx[dir]] = '.';
                    }
                    sy += dy[dir];
                    sx += dx[dir];
                }
            }
            else if (c == 'D')
                dir = (dir+1)%4;
            else
                dir = (4+dir-1)%4;
        }
        printf("%d\n", ans);
    }
    return 0;
}


