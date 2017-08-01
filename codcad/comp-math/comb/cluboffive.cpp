#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, d, e, f, g;
    scanf(" %d", &n);
    scanf(" %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
    if (a + b + c - (d + e + f) + g == n)
        printf("N\n");
    else
        printf("S\n");
    return 0;
}

