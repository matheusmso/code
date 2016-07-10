#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y;
    scanf("%d", &t);
    for (int turns = 0; turns < t; turns++) {
        scanf("%d %d", &x, &y);
        if (x > 10000 || y > 10000)
            continue;
        if ((y == x-2 || y == x) && x >= 0 && y >= 0) {
            if (x%2 == 0)
                printf("%d\n", x+y);
            else
                printf("%d\n", x+y-1);
        }
        else 
            printf("No Number\n");
    }
    return 0;
}

