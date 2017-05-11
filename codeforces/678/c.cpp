#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b, p, q, ans = 0;
    cin >> n >> a >> b >> p >> q;
    ans += p*(n/a);
    ans += q*(n/b);
    ans -= min(p,q)*(n/((a*b)/__gcd(a,b)));
    cout << ans << endl;
    return 0;
}

