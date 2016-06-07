#include <bits/stdc++.h>
using namespace std;

int n, h;

int main() {
    int count = 0;
    scanf("%d%d", &n, &h);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x > h)
            count++;
    }
    printf("%d\n", n+count);
    return 0;
}


