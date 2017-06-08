#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e4+7;
int n;
pair<int, int> p[N];

bool comp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        p[i] = make_pair(x, y);
    }
    sort(p, p+n, comp);
    int ans = 0;
    for (int i = 0, s = 0; i < n; i++) {
        ans = max(max(0, s+p[i].first-p[i].second), ans);
        s += p[i].first;
    }
    printf("%d\n", ans);
    return 0;
}

