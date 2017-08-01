#include <bits/stdc++.h>
using namespace std;

int x[4], y[4];

int main() {
    for (int i = 0; i < 4; i++)
        scanf(" %d %d", &x[i], &y[i]);
    bool inter = x[0] <= x[3] && x[1] >= x[2] && 
        y[1] >= y[2] && y[0] <= y[3];
    printf("%d\n", inter ? 1 : 0);
    return 0;
}



