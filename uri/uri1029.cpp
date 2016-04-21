#include <iostream>
#include <stdio.h>

using namespace std;

int call = 0;

int fibo (int x) {
    if (x == 0) {
        call++;
        return 0;
    }
    if (x == 1) {
        call++;
        return 1;
    }
    call++;
    return fibo(x-1) + fibo(x-2);
}

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        int x;
        scanf("%d", &x);
        int y = fibo(x);
        printf("fib(%d) = %d calls = %d\n", x, call-1, y);
        call = 0;
    }
    return 0;
}


