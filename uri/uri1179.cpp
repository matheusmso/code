#include <iostream>

using namespace std;

int main () {
    int x;
    int odd[5];
    int even[5];
    int odds = 0;
    int evens = 0;
    for (int i = 0; i < 15; i++) {
        scanf("%d", &x);
        if (x%2 == 0)
            even[evens++] = x;
        else
            odd[odds++] = x;
        if (odds == 5) {
            for (int j = 0; j < 5; j++)
                printf("impar[%d] = %d\n", j, odd[j]);
            odds = 0;
        }
        if (evens == 5) {
            for (int j = 0; j < 5; j++)
                printf("par[%d] = %d\n", j, even[j]);
            evens = 0;
        }
    }
    if (odds > 0)
        for (int j = 0; j < odds; j++)
            printf("impar[%d] = %d\n", j, odd[j]);
    if (evens > 0)
        for (int j = 0; j < evens; j++)
            printf("par[%d] = %d\n", j, even[j]);
    return 0;
}


