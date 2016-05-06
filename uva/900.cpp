#include <iostream>
#include <stdio.h>

int f(int x) {
    if (x == 1)
        return 1;
    if (x == 2)
        return 2;
    return f(x-1) + f(x-2);
}

int main() {
    int x;
    while(scanf("%d", &x) == 1) {
        if (x == 0)
            return 0;
        printf("%d\n", f(x));
    }
    return 0;
}


