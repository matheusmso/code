#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int n, m, g[N][N], sx, sy;
int x[] = {-1, 0, 1, 0};
int y[] = {0, 1, 0, -1};

struct node {
    int x, y, dist;
};

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            scanf(" %d", &g[i][j]);
            if (g[i][j] == 2) {
                sx = i;
                sy = j;
            }
        }
    queue<node> q;
    q.push({sx, sy, 1});
    while (!q.empty()) {
        node t = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            if (g[t.x+x[i]][t.y+y[i]] == 1) {
                q.push({t.x+x[i], t.y+y[i], t.dist+1});
                g[t.x+x[i]][t.y+y[i]]--;
            }
            else if (g[t.x+x[i]][t.y+y[i]] == 3) {
                printf("%d\n", t.dist+1);
                return 0;
            }
        }
    }
    return 0;
}
