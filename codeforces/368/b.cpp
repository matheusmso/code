#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, m, v[N], l[N];
set<int> s;

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf(" %d", v+i);
    for (int i = n; i >= 1; i--) {
        s.insert(v[i]);
        l[i] = s.size();
    }
    for (int i = 0; i < m; i++) {
        int k;
        scanf(" %d", &k);
        printf("%d\n", l[k]);
    }
    return 0;
}
