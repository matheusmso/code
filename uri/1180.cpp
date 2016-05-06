#include <iostream>

using namespace std;

int main () {
    int x[1001];
    int N;
    int menor;
    scanf("%d", &N);
    scanf("%d", &menor);
    int pos = 0;
    for (int i = 1; i < N; i++) {
        int x;
        scanf("%d", &x);
        if (x < menor) {
            menor = x;
            pos = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
    return 0;
}



