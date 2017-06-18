#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e2+7;
int n, m, g[N][N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            scanf(" %d", &g[i][j]);
    bool sol = true;
    int count;
    vector<pair<string, int>> ans;
    while (sol) {
        count = 0;
        int x, y;
        int aux = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (g[i][j] > aux) {
                    aux = g[i][j];
                    x = i;
                    y = j;
                }
                if (g[i][j] == 0)
                    count++;
            }
        }
        if (count == n*m) break;
        if (m <= n) {
            bool can = true;
            for (int i = 0; i < n; i++)
                if (g[i][y] == 0)
                    can = false;
            if (can) {
                for (int i = 0; i < n; i++) {
                    g[i][y]--;
                    if (g[i][y] < 0)
                        sol = false;
                }
                ans.push_back(make_pair("col", y+1));
            }
            else {
                for (int i = 0; i < m; i++) {
                    g[x][i]--;
                    if (g[x][i] < 0)
                        sol = false;
                }
                ans.push_back(make_pair("row", x+1));
            }
        }
        else {
            bool can = true;
            for (int i = 0; i < m; i++)
                if (g[x][i] == 0)
                    can = false;
            if (can) {
                for (int i = 0; i < m; i++) {
                    g[x][i]--;
                    if (g[x][i] < 0)
                        sol = false;
                }
                ans.push_back(make_pair("row", x+1));
            }
            else {
                for (int i = 0; i < n; i++) {
                    g[i][y]--;
                    if (g[i][y] < 0)
                        sol = false;
                }
                ans.push_back(make_pair("col", y+1));
            }
        }
    }
    if (sol) {
        cout << ans.size() << endl;
        for (pair<string, int> p : ans)
            cout << p.first << " " << p.second << endl;
    }
    else
        cout << "-1" << endl;
    return 0;
}

