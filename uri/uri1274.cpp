#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        if (n == 0)
            return 0;
        int dest[n+1];
        bool seen[n+1];
        int sol[500];
        int s = 0;
        bool input = true;
        for (int i = 0; i < n; i++) {
            scanf("%d", &dest[i+1]);
            seen[i+1] = false;
        }
        for (int i = 0; i < n; i++) {
            if (seen[dest[i+1]]) 
                input = false;
            else 
                seen[dest[i+1]] = true;
        }
        if (input) {
            while (n > 1) {
                for (int i = 1; i < n; i++) {
                    if (dest[i] > dest[i+1]) {
                        int t = dest[i];
                        dest[i] = dest[i+1];
                        dest[i+1] = t;
                        sol[s++] = i;
                    }
                }
                n--;
            }
            printf("%d ", s);
            for (int i = 0; i < s; i++)
                printf("%d ", sol[i]);
            printf("\n");
        }
        else
            printf("No solution\n");
    }
    return 0;
}


