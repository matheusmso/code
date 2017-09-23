#include <bits/stdc++.h>
using namespace std;

int n, c1, c2;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        if (x == 100) c1++;
        else c2++;
    }
    if (c1 % 2 == 0 && c2 % 2 == 0)
        printf("YES\n");
    else if (c2 % 2 != 0) {
        if (c1 % 2 == 0 && c1 > 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}

        
