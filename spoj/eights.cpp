#include <bits/stdc++.h>
using namespace std;

int main() {
    int turns;
    long long k;
    scanf("%d", &turns);
    for (int t = 0; t < turns; t++) {
        scanf("%lld", &k);
        printf("%lld\n", (k-1)*250+192);
    }
    return 0;
}


