#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long n;
    scanf(" %d", &t);
    for (int i = 1; i <= t; i++) {
        scanf(" %lld", &n);
        printf("Case %d: %lld.25\n", i, 4ll*n*n);
    }
    return 0;
}

