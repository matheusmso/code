#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main() {
    scanf(" %d %d %d %d", &a, &b, &c, &d);
    int p = b*c;
    int q = a*d;
    if (p > q) swap(p, q);
    p = q-p;
    for (int i = 2; i <= p; i++) {
        while (p%i == 0 && q%i == 0) {
            p /= i;
            q /= i;
        }
    }
    if (p == 0) q = 1;
    printf("%d/%d\n", p, q);
    return 0;
}
