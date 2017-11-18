#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
char s[N];

int main() {
    for (int i = 0; i < 1000; i++)
        scanf(" %c", s+i);
    lint ans = 0;
    for (int i = 0, j = 13; j < 1000; i++, j++) {
        lint p = 1;
        for (int k = i; k < j; k++)
            p *= s[k]-'0';
        ans = max(ans, p);
    }
    printf("%lld\n", ans);
    return 0;
}


