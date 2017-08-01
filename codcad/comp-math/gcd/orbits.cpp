#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long lint;
lint a, b;

int main() {
    scanf(" %llu %llu", &a, &b);
    lint aux = a * b;
    aux /= __gcd(a, b);
    printf("%llu\n", aux);
    return 0;
}


    
