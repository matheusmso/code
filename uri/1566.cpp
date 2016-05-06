#include <bits/stdc++.h>

using namespace std;

int h[250];

int main() {
    int nc;
    scanf("%d", &nc);
    for (int i = 0; i < nc; i++) {
        unsigned int n;
        scanf("%d", &n);
        for (unsigned int j = 0; j < n; j++) {
            int l;
            scanf("%d", &l);
            h[l]++;
        }
        bool f = false;
        for (int k = 20; k < 231; k++) {
            while (h[k] > 0) {
                if (f)
                    printf(" ");
                f = true;
                printf("%d", k);
                h[k] -= 1;
            }
        }
        printf("\n");
    }
    return 0;
}


