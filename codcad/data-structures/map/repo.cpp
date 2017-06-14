#include <bits/stdc++.h>
using namespace std;

int c, n;
map<int, int> m;

int main() {
    scanf(" %d %d", &c, &n);
    while (c--) {
        int x, y;
        scanf(" %d %d", &x, &y);
        m[x] = y;
    }
    while (n--) {
        int x, y;
        scanf(" %d %d", &x, &y);
        if (abs(m[x]) < y)
            m[x] = -y;
    }
    for (pair<int, int> p : m)
        if (p.second < 0)
            printf("%d %d\n", p.first, -p.second);
    return 0;
}

