#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
    scanf(" %d %d", &n, &m);
    int tot = (n*(n+1))/2;
    if (m > tot)
        m %= tot;
    for (int i = 1; i <= n; i++) {
        if (m < i)
            break;
        m -= i;
    }
    printf("%d\n", m);
    return 0;
}

