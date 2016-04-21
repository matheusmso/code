#include <iostream>

using namespace std;

int main () {
    int n, i;
    scanf ("%d", &n);
    for (i = 0; i < n; i++){
        double a, b ,c;
        scanf ("%lf %lf %lf", &a, &b, &c);
        printf ("%.1f\n", ((2 * a) + (3 * b) + (5 * c)) / 10);
    }
    return 0;
}
