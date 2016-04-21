#include <iostream>
#include <stdio.h>

using namespace std;

int f(unsigned int x) {
    int s = 1;
    while (x > 1) {
        if (x%2 == 1)
            x = 3 * x + 1;
        else
            x /= 2;
        s++;
    }
    return s;
}

int main() {
    unsigned int x, y;
    while (scanf("%d %d", &x, &y) != EOF) {
        int max = 0;
        unsigned int tempx = x;
        unsigned int tempy = y;
        if (y < x)  {
            tempx = y;
            tempy = x;
        }
        while (tempx <= tempy) {
            int a = f(tempx);
            if (a > max)
                max = a;
            tempx++;
        }
        printf("%d %d %d\n", x, y, max);
    }
    return 0;
}


