#include <bits/stdc++.h>
using namespace std;

int n, f, z;

int main() {
    scanf(" %d", &n);
    while (n--) {
        int x;
        scanf(" %d", &x);
        if (x == 0) z++;
        else f++;
    }
    if (z == 0)
        printf("-1\n");
    else if (f/9 == 0)
        printf("0\n");
    else {
        for (int i = 0; i < f/9*9; i++)
            printf("5");
        for (int i = 0; i < z; i++)
            printf("0");
        printf("\n");
    }
    return 0;
}

