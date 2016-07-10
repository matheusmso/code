#include <bits/stdc++.h>
using namespace std;

int main() {
    double t;
    while (scanf("%lf", &t) && t != 0.0) {
        double att = 0.0;
        int i;
        for (i = 1; att < t; i++) 
            att += 1.0/(i+1);
        printf("%d card(s)\n", i-1);
    }
    return 0;
}

