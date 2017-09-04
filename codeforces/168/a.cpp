#include <bits/stdc++.h>
using namespace std;

int n, x, y;

int main() {
    scanf(" %d %d %d", &n, &x, &y);
    int need = n*y/100 + ((n*y)%100 != 0);
    printf("%d\n", max(need - x, 0));
    return 0;
}

