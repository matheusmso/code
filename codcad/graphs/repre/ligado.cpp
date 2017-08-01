#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
set<int> g[N];
int n, m;

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int o, x, y;
        scanf(" %d %d %d", &o, &x, &y);
        if (o == 0)
            printf("%d\n", g[x].count(y));
        else {
            g[x].insert(y);
            g[y].insert(x);
        }
    }
    return 0;
}
