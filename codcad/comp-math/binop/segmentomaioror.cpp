#include <bits/stdc++.h>
using namespace std;

int n, t;

int main() {
    scanf(" %d", &n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        scanf(" %d", &t);
        for (int i = 0; i < 32; i++)
            ans |= ((1<<i)&t);
    }
    printf("%d\n", ans);
    return 0;
}

