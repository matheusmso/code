#include <bits/stdc++.h>
using namespace std;

int n;
int p[] = {100, 50, 25, 10, 5, 1};

int main() {
    scanf(" %d", &n);
    int ans = 0;
    for (int i = 0; i < 6; i++) {
        ans += n/p[i];
        n %= p[i];
    }
    printf("%d\n", ans);
    return 0;
}

