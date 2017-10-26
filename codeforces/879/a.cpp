#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, ans, k;

int main() {
    scanf(" %d", &n);
    scanf(" %d %d", &ans, &k);
    for (int i = 1; i < n; i++) {
        int s, d;
        scanf(" %d %d", &s, &d);
        int x = 0;
        while (s + x*d <= ans)
            x++;
        ans = s+x*d;
    }
    printf("%d\n", ans);
    return 0;
}


