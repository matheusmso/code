#include <bits/stdc++.h>
using namespace std;

int n, ans;
char a, c;

int main() {
    scanf(" %d", &n);
    scanf(" %c", &a);
    for (int i = 1; i < n; i++) {
        scanf(" %c", &c);
        if (c == a)
            ans++;
        a = c;
    }
    printf("%d\n", ans);
    return 0;
}

