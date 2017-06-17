#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n, m, q, a, b, p[N], w[N];

int find(int i) {
    if (i == p[i]) return i;
    return p[i] = find(p[i]);
}

void u(int i, int j) {
    i = find(i);
    j = find(j);
    if (i == j) return;
    if (w[i] > w[j]) {
        p[j] = i;
        w[i] += w[j];
    }
    else {
        p[i] = j;
        w[j] += w[i];
    }
}

int main() {
    while (scanf(" %d %d", &n, &m) != EOF && n) {
        for (int i = 1; i <= n; i++) {
            scanf(" %d", w+i);
            p[i] = i;
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
            scanf(" %d %d %d", &q, &a, &b);
            if (q == 1) u(a, b);
            else {
                a = find(a);
                b = find(b);
                int t = find(1);
                if (a == t && w[a] > w[b]) ans++;
                else if (b == t && w[b] > w[a]) ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}

