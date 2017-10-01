#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    scanf(" %d %d %d", &a, &b, &c);
    for (int i = 0; i <= a; i++) {
        int j = b-i;
        int k = a-i;
        if (j < 0 || k < 0) continue;
        if (a == i + k && b == i + j && c == j + k) {
            printf("%d %d %d\n", i, j, k);
            return 0;
        }
    }
    printf("Impossible\n");
    return 0;
}

        
