#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, c;

int main() {
    scanf(" %d %d", &n, &c);
    int cur = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        cur -= x;
        cur += y;
        if (cur > c) {
            printf("S\n"); 
            return 0;
        }
    }
    printf("N\n");
    return 0;
}


