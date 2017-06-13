#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int n, m, v[N], dp[N], ans;

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    for (int i = 0; i < n; i++)
        if (v[i] < m)
            dp[v[i]] = 1;
    for (int i = 1; i < m; i++) {
        if (dp[i] == 0) {
            ans++;
            continue;
        }
        for (int j = 0; j < n; j++) {
            if (i+v[j] < m)
                dp[i+v[j]] = 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}

