#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n, lo, ro, b;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        if (x%2) lo++;
        if (y%2) ro++;
        if (x%2 && y%2) b++;
    }
    int need = b%2;
    lo -= b;
    ro -= b;
    if (need == 0) {
        if (lo%2 + ro%2 == 0)
            printf("0\n");
        else if (lo%2 + ro%2 == 1)
            printf("-1\n");
        else
            printf("1\n");
    }
    else {
        if (lo%2 + ro%2 == 0) {
            if (lo || ro)
                printf("1\n");
            else printf("-1\n");
        }
        else if (lo%2 + ro%2 == 1)
            printf("-1\n");
        else
            printf("0\n");
    }
    return 0;
}


