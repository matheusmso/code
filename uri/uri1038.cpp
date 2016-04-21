#include <iostream>

using namespace std;

int main () {
    double v[] = {0, 4.0, 4.5, 5.0, 2.0, 1.5};
    int cod, qtde;
    scanf("%d %d", &cod, &qtde);
    printf("Total: R$ %.2f\n", v[cod]*qtde);
    return 0;
}