#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    scanf("%lld", &n);
    int count = 0;
    while (n) {
        n = n&(n-1);
        count++;
    }
    if (count == 1)
        printf("TAK\n");
    else
        printf("NIE\n");
    return 0;
}

