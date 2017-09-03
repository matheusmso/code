#include <bits/stdc++.h>
using namespace std;

int n, ans;

int main() {
    scanf(" %d", &n);
    while (n--) {
        char s[10];
        scanf(" %s", s);
        if (s[1] == '+')
            ans++;
        else
            ans--;
    }
    printf("%d\n", ans);
    return 0;
}

