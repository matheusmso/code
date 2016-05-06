#include <iostream>

using namespace std;

int main () {
    int n, x, y, i, sum, aux;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        sum = 0;
        scanf ("%d %d", &x, &y);
        if (x < y) {
            aux = x;
            x = y;
            y = aux;
        }
        if (y % 2 == 1 && x != y) {
            if (x % 2 == 1)
                sum = (((x - y - 4) / 2) + 1) * (y + x) / 2;
            else
                sum = (((x - y - 3) / 2) + 1) * (y + x + 1) / 2;
        }
        else if (x != y) {
            if (x % 2 == 1)
                sum = (((x - y - 3) / 2) + 1) * (y + x - 1) / 2;
            else 
                sum = (((x - y - 2) / 2) + 1) * (y + x) / 2;
        }
        printf ("%d\n", sum);
    }
    return 0;
}
