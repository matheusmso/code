#include <iostream>
#include <stdio.h>

using namespace std;

int f(int x) {
    if (x <= 100)
        return f(f(x + 11));
    else
        return x - 10;
}

int main() {
    int x;
    while (scanf("%d", &x) == 1) {
        if ( x == 0)
            return 0;
        printf("f91(%d) = %d\n", x, f(x));
    }
    return 0;
}


