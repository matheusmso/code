#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[1007][1007];
int row[1007];
int col[1007];
int star;

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            scanf(" %c", &grid[i][j]);
            star += (grid[i][j] == '*');
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            row[i] += (grid[i][j] == '*');
    for (int j = 1; j <= m; j++)
        for (int i = 1; i <= n; i++)
            col[j] += (grid[i][j] == '*');
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= m; j++)
            if (row[i] + col[j] - (grid[i][j] == '*') == star) {
                printf("YES\n%d %d\n", i, j);
                return 0;
            }
    printf("NO\n");
    return 0;
}
