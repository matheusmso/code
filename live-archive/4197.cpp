#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, n, ans, ot;
    while(1) {
        ot = 0;
        scanf("%d %d %d %d", &n, &a, &b, &c);
        if (n == 0 && a == 0 && b == 0 && c == 0)
            break;
        for (int i = 0; i < n; i++) {
            ans = 2*n;
            if (i < a)
                ans += n-a+i;
            else if (i > a)
                ans += i-a;
            ot = max(ans, ot);
        }
        ot += n;
        if (a < b)
            ot += b-a;
        else if (a > b)
            ot += n-a+b;
        if (b < c)
            ot += n-c+b;
        else if (b > c)
            ot += b-c;
        printf("%d\n", ot);
    }
    return 0;
}

