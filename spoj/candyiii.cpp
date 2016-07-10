#include <bits/stdc++.h>
using namespace std;

int main() {
    long long turns, n;
    scanf(" %lld", &turns);
    for (int t = 0; t < turns; t++) {
        scanf(" %lld", &n);
        long long ans = 0;
        for (long long i = 0; i < n; i++) {
            long long x;
            scanf("%lld", &x);
            ans = ((ans%n)+(x%n))%n;
        }
        if (ans)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

