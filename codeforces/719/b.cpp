#include <bits/stdc++.h>
using namespace std;
const int N = (int)1e5+7;
char s[N];
int n;

int main() {
    scanf(" %d %s", &n, s);
    int a, b, ans;
    a = b = 0;
    for (int i = 0; i < n; i++) {
        if (i%2 == 0 && s[i] == 'r')
            a++;
        if (i%2 == 1 && s[i] == 'b')
            b++;
    }
    ans = max(a, b);
    a = b = 0;
    for (int i = 0; i < n; i++) {
        if (i%2 == 0 && s[i] == 'b')
            a++;
        if (i%2 == 1 && s[i] == 'r')
            b++;
    }
    ans = min(ans, max(a, b));
    printf("%d\n", ans);
    return 0;
}



