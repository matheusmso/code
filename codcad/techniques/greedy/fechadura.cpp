#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int n, m, v[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    int ans = 0;
    for (int i = 0; i < n-1; i++) {
        if (v[i] > m) {
            int t = v[i] - m;
            ans += t;
            v[i] -= t;
            v[i+1] -= t;
        }
        else if (m > v[i]) {
            int t = m - v[i];
            ans += t;
            v[i] += t;
            v[i+1] += t;
        }
    }
    printf("%d\n", ans);
    return 0;
}



