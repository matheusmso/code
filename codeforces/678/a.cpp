#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
    scanf("%d%d", &n, &k);
    int t = n/k;
    t *= k;
    while (t <= n)
        t += k;
    printf("%d\n", t);
    return 0;
}


