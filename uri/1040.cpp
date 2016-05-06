#include <iostream>

using namespace std;

int main () {
    double n[4], a;
    int i;
    for (i = 0; i < 4; i++)
        scanf("%lf", &n[i]);
    a = (2 * n[0]) + (3 * n[1]) + (4 * n[2]) + n[3];
    a /= 10;
    printf("Media: ");
    if (a >= 7.0)
        printf("%.1f\nAluno aprovado.\n", a);
    else if (a < 5.0)
        printf("%.1f\nAluno reprovado.\n", a);
    else {
        printf("%.1f\nAluno em exame.\n", a);
        double r;
        scanf("%lf", &r);
        a = (a + r) / 2;
        printf ("Nota do exame: %.1f\n", r);
        if (a >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", a);
    }
    return 0;
}