#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int s, n;
pair<int, int> v[N];

int main() {
    scanf(" %d %d", &s, &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        v[i] = {x, y};
    }
    sort(v, v+n);
    for (int i = 0; i < n; i++) {
        if (v[i].first >= s) {
            printf("NO\n");
            return 0;
        }
        s += v[i].second;
    }
    printf("YES\n");
    return 0;
}


