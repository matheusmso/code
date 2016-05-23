#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    scanf("%d %d", &a, &b);
    int time = 0;
    if (a < 2 && b < 2) {
        printf("0\n");
        return 0;
    }
    while (a > 0 && b > 0) {
        if (b > 2) {
            a = a + 1;
            b = b - 2;
        }
        else {
            b = b + 1;
            a = a - 2;
        }
        time++;
        //printf("%d %d\n", a, b);
    }
    printf("%d\n", time);
    return 0;
}

