#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, t, v[N];

int main() {
    scanf(" %d %d", &n, &t);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    int ans = 0;
    int s = 0;
    for (int i = 0, j = 0; i < n; i++) {
        while (j < n && s + v[j] <= t)
            s += v[j++];
        ans = max(ans,j-i);
        s -= v[i];
    }
    printf("%d\n", ans);
    return 0;
}

