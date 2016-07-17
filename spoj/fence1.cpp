#include <bits/stdc++.h>
using namespace std;

const double pi = acos(-1.0);

int main() {
    int l;
    while (scanf(" %d", &l) && l) {
        double r = l/pi;
        double area = pi*r*r/2.0;
        printf("%.2f\n", area);
    }
    return 0;
}

