#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n;
pair<int, int> v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        v[i] = {x, y};
    }
    sort(v, v+n);
    int m = v[0].second;
    for (int i = 0; i < n; i++) {
        if (v[i].second < m) {
            printf("Happy Alex\n");
            return 0;
        }
        m = max(m, v[i].second);
    }
    printf("Poor Alex\n");
    return 0;
}


