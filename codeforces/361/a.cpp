#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                printf("%d%c", k%n + k/n, " \n"[j == n-1]);
            else
                printf("%d%c", k/n, " \n"[j == n-1]);
        }
    }
    return 0;
}

