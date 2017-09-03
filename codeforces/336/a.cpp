#include <bits/stdc++.h>
using namespace std;

int x, y;

int main() {
    scanf(" %d %d", &x, &y);
    pair<int, int> a, c;
    if (x > 0 && y > 0) {
        a = {0, x+y};
        c = {x+y, 0};
    }
    else if (x < 0 && y > 0) {
        a = {x-y, 0};
        c = {0, y-x};
    }
    else if (x < 0 && y < 0) {
        a = {x+y, 0};
        c = {0, x+y};
    }
    else if (x > 0 && y < 0) {
        a = {0, y-x};
        c = {x-y, 0};
    }
    printf("%d %d %d %d\n", a.first, a.second, c.first, c.second);
    return 0;
}


