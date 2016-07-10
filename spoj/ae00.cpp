#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    scanf("%d", &x);
    int ans = 0;
    for (int i = 1; i <= sqrt(x); i++)
        ans += x/i-i+1;
    printf("%d\n", ans);
    return 0;
}

