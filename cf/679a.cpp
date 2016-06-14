#include <bits/stdc++.h>
using namespace std;

int primes[] = {4,9,25,49,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

int main() {
    int div = 0;
    for (int i = 0; i < 4; i++) {
        printf("%d\n", primes[i]);
        fflush(stdout);
        char res[3];
        scanf("%s", res);
        if (res[0] == 'y') {
            printf("composite\n");
            fflush(stdout);
            return 0;
        }
    }
    for (int i = 4; i < 19; i++) {
        printf("%d\n", primes[i]);
        fflush(stdout);
        char res[3];
        scanf("%s", res);
        if (res[0] == 'y') {
            div++;
        }
    }
    if (div > 1)
        printf("composite\n");
    else
        printf("prime\n");
    fflush(stdout);
    return 0;
}

