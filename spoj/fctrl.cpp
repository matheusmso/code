#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int ans = 0;
        for (int j = 5; n/j >= 1; j *= 5)
            ans += n/j;
        printf("%d\n", ans);
    }
    return 0;
}

