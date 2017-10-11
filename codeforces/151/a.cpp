#include <bits/stdc++.h>
using namespace std;

int n, k, l, c, d, p, nl, np;

int main() {
    scanf(" %d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int aux = min({k*l/nl, c*d, p/np});
    printf("%d\n", aux/n);
    return 0;
}

