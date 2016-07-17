#include <bits/stdc++.h>
using namespace std;

long long x, y, sum;

int main() {
    int tests;
    scanf(" %d", &tests);
    while (tests--) {
        scanf(" %lld %lld %lld", &x, &y, &sum);
        long long n = (2*sum)/(x+y);
        long long r = (y-x)/(n-5);
        long long a = x - 2*r;
        printf("%lld\n", n);
        for (int i = 0; i < n; i++)
            printf("%lld ", a + i*r);
        printf("\n");
    }
    return 0;
}

