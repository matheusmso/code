#include <bits/stdc++.h>
using namespace std;

int v[17][17], r, c;

int main() {
    int ans = 0;
    scanf(" %d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        int k = 0;
        for (int j = 0; j < c; j++) {
            char c;
            scanf(" %c", &c);
            if (c == 'S') {
                v[i][j] = 1;
                k++;
            }
        }
        if (k == 0)
            ans += c;
    }
    int aux = ans/c;
    for (int i = 0; i < c; i++) {
        int k = 0;
        for (int j = 0; j < r; j++)
            k += v[j][i];
        if (k == 0)
            ans += r-aux;
    }
    printf("%d\n", ans);
    return 0;
}


