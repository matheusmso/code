#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    while (scanf(" %d %d", &a, &b) && a != -1) {
        int x = max(a, b);
        int y = min(a, b);
        printf("%d\n", max(x/(y+1), (x+y)/(y+1)));
    }
    return 0;
}

