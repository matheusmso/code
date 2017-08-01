#include <bits/stdc++.h>
using namespace std;

bool isTri(int x, int y, int z) {
    return x + y > z && x + z > y && y + z > x;
}

bool isRet(int x, int y, int z) {
    x *= x;
    y *= y;
    z *= z;
    return x == y + z || y == x + z || z == x + y;
}

bool isAc(int x, int y, int z) {
    x *= x;
    y *= y;
    z *= z;
    int sum = x + y + z;
    int m = max({x, y, z});
    return m < sum-m;
}

int main() {
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);
    if (!isTri(a, b, c))
        printf("n\n");
    else if (isRet(a, b, c))
        printf("r\n");
    else if (isAc(a, b, c))
        printf("a\n");
    else
        printf("o\n");
    return 0;
}


