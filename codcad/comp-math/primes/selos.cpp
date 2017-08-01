#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
lint n;

bool isPrime(lint x) {
    for (lint i = 2; i*i <= x; i++)
        if (x%i == 0) return false;
    return x != 1;
}

int main() {
    scanf(" %lld", &n);
    printf("%s\n", n == 1 || isPrime(n) ? "N" : "S");
    return 0;
}
