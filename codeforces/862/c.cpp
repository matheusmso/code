#include <bits/stdc++.h>
using namespace std;

int n, x;

int main() {
    scanf(" %d %d", &n, &x);
    if (n == 2 && x == 0) {
        printf("NO\n");
        return 0;
    }
    printf("YES\n");
    if (n == 1) printf("%d\n", x);
    else if (n == 2) printf("%d %d\n", 0, x);
    else {
        int sum = 0;
        for (int i = 1; i <= n-3; i++) {
            printf("%d ", i);
            sum ^= i;
        }
        int k = 1<<17;
        if (sum == x) printf("%d %d %d\n", k, 2*k, k^2*k);
        else {
            printf("%d %d %d\n", 0, k, k^x^sum);
        }
    }
    return 0;
}

