#include <bits/stdc++.h>
using namespace std;

int n;
map<pair<int, int>, int> m;

int main() {
    scanf(" %d", &n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        m[{x, y}]++;
        ans = max(ans, m[{x, y}]);
    }
    printf("%d\n", ans);
    return 0;
}
