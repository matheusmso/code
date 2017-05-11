#include <bits/stdc++.h>
using namespace std;

int n, k;
long long v[100007];
set<int> s;

int main() {
    scanf(" %d %d", &n, &k);
    long long t = 0;
    for (int i = 0; i < n; i++) {
        scanf(" %lld", &v[i]);
        t += v[i];
    }
    long long ans = 0;
    for (int i = 0; i < k; i++) {
        int x;
        scanf(" %d", &x);
        s.insert(x-1);
    }
    for (int i : s) {
        t -= v[i];
        ans += t*v[i];
    }
    for (int i = 0; i < n; i++) {
        int j = (i+1)%n;
        if (!s.count(i) && !s.count(j))
            ans += v[i]*v[j];
    }
    printf("%lld\n", ans);
    return 0;
}

