#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int a, b, c;

int main() {
    scanf(" %d %d %d", &a, &b, &c);
    for (int x = 1; x <= a; x++) {
        if (a%x == 0) {
            int y = a/x;
            if (c%y == 0) {
                int z = c/y;
                if (z*x == b) {
                    printf("%d\n", 4*(x + y + z));
                    return 0;
                }
            }
        }
    }
    return 0;
}


