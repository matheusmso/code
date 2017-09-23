#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    scanf(" %d %d %d %d", &x1, &y1, &x2, &y2);
    if (x1 == x2) {
        int side = abs(y1 - y2);
        x4 = x3 = x1 + side;
        y3 = y1;
        y4 = y2;
    }
    else if (y1 == y2) {
        int side = abs(x1 - x2);
        y4 = y3 = y1 + side;
        x3 = x1;
        x4 = x2;
    }
    else if (abs(x1 - x2) == abs(y1 - y2)) {
        if (x1 > x2) {
            swap(x1, x2);
            swap(y1, y2);
        }
        if (y1 < y2) {
            x3 = x2;
            y3 = y1;
            x4 = x1;
            y4 = y2;
        }
        else {
            x3 = x1;
            y3 = y2;
            x4 = x2;
            y4 = y1;
        }
    }
    else {
        printf("-1\n");
        return 0;
    }
    printf("%d %d %d %d\n", x3, y3, x4, y4);
    return 0;
}
