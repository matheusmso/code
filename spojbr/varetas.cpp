#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;

int main() {
    while (scanf(" %d", &n) && n) {
        int s = 0;
        int r = 0;
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            s += y/4;
            y %= 4;
            r += y/2;
        }
        printf("%d\n", s + r/2);
    }
    return 0;
}


