#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 0; i < k; i++)
        printf("%d ", n-i);
    for (int i = 0; i < n-k; i++)
        printf("%d ", i+1);
    printf("\n");
    return 0;
}

