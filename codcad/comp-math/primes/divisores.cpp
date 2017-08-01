#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
int a, b, c, d;

int main() {
    scanf(" %d %d %d %d", &a, &b, &c, &d);
    int ans = INF;
    for (int i = 2; i*i <= c; i++) {
        if (i%a == 0 && i%b != 0 && c%i == 0 && d%i != 0)
            ans = min(ans, i);
        if ((c/i)%a == 0 && (c/i)%b != 0 && c%(c/i) == 0 && d%(c/i) != 0)
            ans = min(ans, c/i);
    }
    printf("%d\n", ans == INF ? -1 : ans);
    return 0;
}

