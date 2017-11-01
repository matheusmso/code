#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
lint n, k, v[N];

bool ok(lint a) {
    if (a == 0) return 0;
    lint ans = 0;
    for (int i = 0; i < n; i++)
        ans += v[i]/a;
    return ans >= k;
}

int main() {
    scanf(" %lld %lld", &n, &k);
    for (int i = 0; i < n; i++)
        scanf(" %lld", v+i);
    lint l = 0;
    lint h = 1e15;
    while (l <= h) {
        lint mid = (l+h)/2;
        if (ok(mid))
            l= mid+1;
        else
            h = mid-1;
    }
    if (h == -1)
        printf("0\n");
    else printf("%lld\n", h);
    return 0;
}


