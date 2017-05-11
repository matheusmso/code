#include <bits/stdc++.h>
using namespace std;

long long d, k, a, b, t;

int main() {
    cin >> d >> k >> a >> b >> t;
    long long ans;
    if (k >= d)
        ans = a*d;
    else if (t+a*k>b*k)
        ans = a*k+(d-k)*b;
    else {
        long long rem = d%k;
        long long count = d/k;
        ans = count*a*k+(count-1)*t+min(t+rem*a, rem*b);
    }
    printf("%lld\n", ans);
    return 0;
}
