#include <bits/stdc++.h>
using namespace std;

int n, m, t;

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &m);
        for (int k = n; k <= m; k ++) {
            bool x = true;
            for (int j = 2; j*j <= k; j++) {
                if (k%j == 0) {
                    x = false;
                    break;
                }
            }
            if (x && k != 1)
                printf("%d\n", k);
        }
        printf("\n");
    }
    return 0;
}


