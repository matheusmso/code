#include <bits/stdc++.h>
#define pb push_back
using namespace std;

const int N = (int)1e2+7;
int n, m, g[N][N];
vector<pair<int, int>> ans;
char out[2][4] = {"row", "col"};

int solve() {
    for (int i = 0; i < n; i++) {
        int rowmin = 501;
        for (int j = 0; j < m; j++)
            rowmin = min(rowmin, g[i][j]);
        for (int j = 0; j < m; j++)
            g[i][j] -= rowmin;
        for (int j = 0; j < rowmin; j++)
            ans.pb({0, i});
        //printf("row %d rowmin %d\n", i, rowmin);
    }
    for (int i = 0; i < m; i++) {
        int colmin = 501;
        for (int j = 0; j < n; j++)
            colmin = min(colmin, g[j][i]);
        for (int j = 0; j < n; j++)
            g[j][i] -= colmin;
        for (int j = 0; j < colmin; j++)
            ans.pb({1, i});
        //printf("col %d colmin %d\n", i, colmin);
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (g[i][j])
                return -1;
    return ans.size();
}

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            scanf(" %d", &x);
            if (m < n)
                g[j][i] = x;
            else g[i][j] = x;
        }
    }
    bool transposed = false;
    if (m < n) {
        swap(n, m);
        transposed = true;
    }
    int sol = solve();
    printf("%d\n", sol);
    for (int i = 0; i < sol; i++) {
        if (transposed)
            ans[i].first = 1 -ans[i].first;
        printf("%s %d\n", out[ans[i].first], ans[i].second+1);
    }
    return 0;
}
