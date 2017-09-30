#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 1e5+7;
int n, m;
lint v[N], w1, h1, w2, h2;

int main() {
    scanf(" %d", &n);
    for (int i = 1; i <= n; i++)
        scanf(" %d", v+i);
    scanf(" %d", &m);
    lint p = 0;
    for (int i = 0; i < m; i++) {
        scanf(" %lld %lld", &w2, &h2);
        p = max(p+h1, v[w2]);
        cout << p << endl;
        w1 = w2;
        h1 = h2;
    }
    return 0;
}
        
