#include <bits/stdc++.h>
using namespace std;

int t, n;
long long v[1000007];

int main() {
    scanf(" %d", &t);
    v[1] = 2;
    for (int i = 2; i < 1000001; i++)
        v[i] = (v[i-1] + 2*i + i-1) % 1000007;
    while (t--) {
        scanf(" %d", &n);
        printf("%lld\n", v[n]);
    }
    return 0;
}

