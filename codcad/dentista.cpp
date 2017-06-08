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
    int ans = 1;
    for (int i = 1, j = 0; i < n; i++) {
        if (p[j].second <= p[i].first) {
            ans++;
            j = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}

