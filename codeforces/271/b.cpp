#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const lint LINF = 0x3f3f3f3f3f3f3f3f;
const int N = 1e5+7;
const int M = 5e2+7;
lint c[N], v[M][M];
vector<lint> p;
int n, m;

void sieve() {
    for (lint i = 2; i < N; i++) {
        if (c[i] == 0) {
            c[i] = 1;
            p.push_back(i);
            for (lint j = i*i; j < N; j += i)
                c[j] = 1;
        }
    }
}

int main() {
    scanf(" %d %d", &n, &m);
    sieve();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            scanf(" %lld", &v[i][j]);
            int pos = lower_bound(p.begin(), p.end(), v[i][j]) - p.begin();
            v[i][j] = p[pos] - v[i][j];
        }
    lint ans = LINF;
    for (int i = 0; i < n; i++) {
        lint row = 0;
        for (int j = 0; j < m; j++)
            row += v[i][j];
        ans = min(ans, row);
    }
    for (int j = 0; j < m; j++) {
        lint col = 0;
        for (int i = 0; i < n; i++)
            col += v[i][j];
        ans = min(ans, col);
    }
    printf("%lld\n", ans);
    return 0;
}



