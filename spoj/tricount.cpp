#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    scanf( "%d", &t);
    while(t--) {
        long long n;
        scanf(" %lld", &n);
        long long count  = n;
        count *= n+2;
        count *= 2*n+1;
        count /= 8;
        printf("%lld\n", count);
    }
    return 0;
}

