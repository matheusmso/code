#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf(" %d", &n);
    int x, ans;
    scanf(" %d %d", &x, &ans);
    ans = __gcd(x, ans);
    for (int i = 0; i < n-2; i++) {
        scanf(" %d", &x);
        ans = __gcd(x, ans);
    }
    printf("%d\n", ans);
    return 0;
}

        
