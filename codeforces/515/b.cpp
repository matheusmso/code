#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e2+7;
int n, m, b, g;
int x[N], y[N];

int main() {
    scanf(" %d %d", &n, &m);
    scanf(" %d", &b);
    for (int i = 0; i < b; i++) {
        int k;
        scanf(" %d", &k);
        x[k] = 1;
    }
    scanf(" %d", &g);
    for (int i = 0; i < g; i++) {
        int k;
        scanf(" %d", &k);
        y[k] = 1;
    }
    for (int i = 0; i <= 100000; i++)
        if (x[i%n] || y[i%m])
            x[i%n] = y[i%m] = 1;
    bool good = true;
    for (int i = 0; i < n && good; i++)
        if (x[i] == 0)
            good = false;
    for (int i = 0; i < m && good; i++)
        if (y[i] == 0)
            good = false;
    printf("%s\n", good ? "Yes" : "No");
    return 0;
}


