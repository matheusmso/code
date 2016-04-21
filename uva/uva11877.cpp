#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int x;
    while (scanf("%d", &x) == 1) {
        if (x == 0)
            return 0;
        printf("%d\n", x/2);
    }
    return 0;
}


