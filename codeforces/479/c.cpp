#include <bits/stdc++.h>
using namespace std;

const int N = 5e3+7;
int n;
pair<int, int> v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf(" %d %d", &a, &b);
        v[i] = {a, b};
    }
    sort(v, v+n);
    int ans = v[0].second;
    for (int i = 1; i < n; i++) {
        if (v[i].second >= ans)
            ans = v[i].second;
        else
            ans = v[i].first;
    }
    printf("%d\n", ans);
    return 0;
}
