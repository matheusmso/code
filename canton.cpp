#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    scanf(" %d", &t);
    for (int k = 0; k < t; k++) {
        int x;
        scanf(" %d", &x);
        printf("TERM %d IS %d/%d\n", x, num[x], dem[x]);
    }
    return 0;
}

