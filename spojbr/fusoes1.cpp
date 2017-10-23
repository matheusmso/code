#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n, k, p[N], w[N];

int find(int i) {
    if (i == p[i])
        return i;
    return p[i] = find(p[i]);
}

void u(int i, int j) {
    i = find(i);
    j = find(j);
    if (i == j) return;
    if (w[i] > w[j])
        p[j] = i;
    else {
        p[i] = j;
        w[j] = max(w[j], w[i]+1);
    }
}

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        p[i] = i;
        w[i] = 1;
    }
    for (int i = 0; i < k; i++) {
        int x, y;
        char c;
        scanf(" %c %d %d", &c, &x, &y);
        if (c == 'C')
            printf("%s\n", find(x) == find(y) ? "S" : "N");
        else
            u(x, y);
    }
    return 0;
}

