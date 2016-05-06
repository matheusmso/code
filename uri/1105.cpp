#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, n;
    while (1) {
        scanf("%d %d", &b, &n);
        if (b == 0 && n == 0)
            break;
        int aux[50];
        for (int i = 0; i < b; i++){
            scanf("%d", &aux[i+1]);
        }
        for (int i = 0; i < n; i++) {
            int c, d, v;
            scanf("%d %d %d", &d, &c, &v);
            aux[c] += v;
            aux[d] -= v;
        }
        bool ok = true;
        for (int i = 0; i < b; i++) {
            if (aux[i+1] < 0) {
                ok = false;
            }
        }
        if (ok)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}

