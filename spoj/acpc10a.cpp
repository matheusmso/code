#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    while (scanf("%d %d %d", &x, &y, &z) && !(x == 0 && y == 0 && z == 0)) {
        if (z-y == y-x)
            printf("AP %d\n", z+y-x);
        else
            printf("GP %d\n", z*y/x);
    }
    return 0;
}

