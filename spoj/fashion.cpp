#include <bits/stdc++.h>
using namespace std;

int a[1007], b[1007];

int main() {
    int turns, n;
    scanf("%d", &turns);
    for (int t= 0; t < turns; t++) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", a+i);
        for (int i = 0; i < n; i++)
            scanf("%d", b+i);
        sort(a, a+n);
        sort(b, b+n);
        int ans = 0;
        for (int i = 0; i < n; i++)
            ans += a[i]*b[i];
        printf("%d\n", ans);
    }
    return 0;
}


