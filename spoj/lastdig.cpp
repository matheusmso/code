#include <bits/stdc++.h>
using namespace std;

int main() {
    int turns, a, b;
    scanf("%d", &turns);
    for (int t = 0; t < turns; t++) {
        scanf(" %d %d", &a, &b);
        if (b == 0)
            printf("1\n");
        else {
            int ans = 1;
            int k = b%4 == 0? 4 : b%4;
            for (int j = 0; j < k; j++)
                ans *= a;
            printf("%d\n", ans%10);
        }
    }
    return 0;
}

