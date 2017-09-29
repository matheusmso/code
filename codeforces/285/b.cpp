#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, s, t, v[N];
set<int> c;

int main() {
    scanf(" %d %d %d", &n, &s, &t);
    for (int i = 1; i <= n; i++)
        scanf(" %d", v+i);
    int ans = 0;
    while (s != t) {
        if (c.count(v[s])) {
            printf("-1\n");
            return 0;
        }
        s = v[s];
        c.insert(s);
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}
