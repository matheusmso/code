#include <iostream>
#include <stdio.h>

using namespace std;

int f(int x, int y) {
    if (x <= y)
        return 1;
    return f(x/2, y) + f(x - (x/2), y);
}

int main() {
    int x, y;
    while(scanf("%d %d", &x, &y) == 2) {
        if (x == y && x == 0) 
            return 0;
        printf("%d\n", f(x, y));
    }
    return 0;
}

