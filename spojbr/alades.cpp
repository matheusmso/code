#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int h1, m1, h2, m2;

int main() {
    while (scanf(" %d %d %d %d", &h1, &m1, &h2, &m2)) {
        if (h1 + h2 + m1 + m2 == 0) break;
        if (h1 == 0) h1 = 24;
        if (h2 == 0) h2 = 24;
        int x = 60*h1 + m1;
        int y = 60*h2 + m2;
        int ans = y - x;
        if (ans <= 0)
            ans += 24*60;
        printf("%d\n", ans);
    }
    return 0;
}


