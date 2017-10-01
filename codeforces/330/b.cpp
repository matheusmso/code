#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int n, m, v[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        v[x] = 1;
        v[y] = 1;
    }
    int center = -1;
    for (int i = 1; i <= n; i++) {
        if (v[i] == 0) {
            center = i;
            break;
        }
    }
    printf("%d\n", n-1);
    for (int i = 1; i <= n; i++)
        if (i != center)
            printf("%d %d\n", i, center);
    return 0;
}
