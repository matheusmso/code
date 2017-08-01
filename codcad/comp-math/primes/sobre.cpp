#include <bits/stdc++.h>
using namespace std;

int n;

bool isPrime(int k) {
    for (int i = 2; i*i <= k; i++)
        if (k%i == 0) return false;
    return k != 1;
}

int main() {
    scanf(" %d", &n);
    for (int i = 2; i <= n; i++)
        if (isPrime(i))
            printf("%d ", i);
    printf("\n");
    return 0;
}

