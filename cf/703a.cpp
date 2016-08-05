#include <bits/stdc++.h>
using namespace std;

int m, c, n;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        if (x > y)
            m++;
        else if (y > x)
            c++;
    }
    if (m > c)
        printf("Mishka\n");
    else if (c > m)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");
    return 0;
}

