#include <bits/stdc++.h>
using namespace std;

int n, x;

int main() {
    scanf(" %d", &n);
    int sum = 0;
    int m[2] = {0, 0};
    while (n--) {
        scanf(" %d", &x);
        sum += x;
        m[x%2]++;
    }
    printf("%d\n", m[sum%2]);
    return 0;
}

