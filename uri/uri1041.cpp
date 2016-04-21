#include <iostream>

using namespace std;

int main () {
    double x, y;
    scanf("%lf %lf", &x, &y);
    if (y > 0) {
        if (x > 0)
            printf ("Q1\n");
        else if (x < 0)
            printf ("Q2\n");
        else
            printf ("Eixo Y\n");
    }
    else if (y < 0) {
        if (x > 0)
            printf ("Q4\n");
        else if (x < 0)
            printf ("Q3\n");
        else
            printf ("Eixo Y\n");
    }
    else {
        if (x)
            printf ("Eixo X\n");
        else 
            printf ("Origem\n");
    }
    return 0;
}