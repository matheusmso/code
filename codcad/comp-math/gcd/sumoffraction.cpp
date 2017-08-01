#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
lint a, b, c, d, aux;

int main() {
    scanf(" %lld %lld %lld %lld", &a, &b, &c, &d);
    aux = (b*d)/__gcd(b, d);
    a *= aux/b;
    c *= aux/d;
    a = a + c;
    b = aux;
    // now fraction is a / b
    aux = __gcd(a, b);
    a /= aux;
    b /= aux;
    printf("%lld %lld\n", a, b);
    return 0;
}
