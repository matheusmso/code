#include <bits/stdc++.h>
using namespace std;

int x, y;

int main() {
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j<= 5; j++) {
            int t;
            scanf(" %d", &t);
            if (t == 1) {
                y = i;
                x = j;
                break;
            }
        }
    printf("%d\n", abs(3-x)+abs(3-y));
    return 0;
}
