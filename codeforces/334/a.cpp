#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    scanf(" %d", &n);
    int l = 1;
    int r = n*n;
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n/2; i++) {
            printf("%d %d ", l++, r--);
        }
        printf("\n");
    }
    return 0;
}

