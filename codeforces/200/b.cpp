#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    scanf(" %d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        sum += x;
    }
    printf("%f\n", (sum*1.0)/n);
    return 0;
}

