#include <bits/stdc++.h>
using namespace std;

int a[10007], n, t;

int main() {
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
            scanf("%d", &a[j]);
        int k, count = 0;
        scanf("%d", &k);
        if (k <= a[0])
            count++;
        for (int j = 1; j < n; j++) {
            scanf("%d", &k);
            if (k <= a[j] - a[j-1])
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

