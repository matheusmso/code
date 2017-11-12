#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
int n, r, v[N];

int main() {
    while (scanf(" %d %d", &n, &r) != EOF) {
        for (int i = 0; i < r; i++) {
            int x;
            scanf(" %d", &x);
            v[x] = 1;
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (v[i])
                v[i] = 0;
            else {
                printf("%d ", i);
                cnt++;
            }
        }
        if (cnt == 0)
            printf("*");
        printf("\n");
    }
    return 0;
}


