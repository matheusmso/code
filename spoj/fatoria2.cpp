#include <iostream>
#include <stdio.h>

int fat (int x) {
    if (x == 0)
        return 1;
    return x * fat(x - 1);
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", fat(x));
    return 0;
}

