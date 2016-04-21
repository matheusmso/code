#include <iostream>

using namespace std;

int main () {
    int i, v, max = -1, pos = 0;
    for (i = 1; i < 101; i++) {
        scanf ("%d", &v);
        if (v > max) {
            max = v;
            pos = i;
        }
    }
    printf ("%d\n%d\n", max, pos);
    return 0;
}
