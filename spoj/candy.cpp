#include <bits/stdc++.h>
using namespace std;

int a[10007];

int main() {
    int n;
    while(scanf("%d", &n) && n != -1) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", a+i);
            sum += a[i];
        }
        int av = sum/n;
        int ans = 0;
        if (sum%n == 0) {
            for (int i = 0; i < n; i++)
                if (a[i] > av)
                    ans += a[i]-av;
            printf("%d\n", ans);
        }
        else
            printf("-1\n");
    }
    return 0;
}

