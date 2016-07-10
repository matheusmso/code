#include <bits/stdc++.h>
using namespace std;

long long s(long long x) {
    return (x*(x+1)*(2*x+1))/6;
}

int main() {
    long long t;
    while (scanf("%lld", &t) != EOF && t != 0)
        printf("%lld\n", s(t));
    return 0;
}

