#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e2+7;

int in[N], out[N], a, v, teste = 1;

int main() {
    while (scanf(" %d %d", &a, &v) && a) {
        memset(in, 0, sizeof(in));
        memset(out, 0, sizeof(out));
        for (int i = 0; i < v; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            out[x]++, in[y]++;
        }
        int maxi = 0;
        for (int i = 1; i <= a; i++)
            maxi = max(maxi, out[i] + in[i]);
        printf("Teste %d\n", teste++);
        for (int i = 1; i <= a; i++)
            if (in[i] + out[i] == maxi)
                printf("%d ", i);
        printf("\n\n");
    }
    return 0;
}

