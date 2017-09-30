#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, m, v[N], w1, h1, w2, h2;

int main() {
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++)
        scanf(" %d", v+i);
    scanf(" %d", &m);
    int p = 0;
    for (int i = 0; i < m; i++) {
        scanf(" %d %d", &w2, &h2);
        p = max(p+h1, v[w2]);
        printf("%d\n", p);
        w1 = w2;
        h1 = h2;
    }
    return 0;
}
        
