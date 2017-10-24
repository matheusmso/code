#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e5+7;
int n, v[N];

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    sort(v, v+n);
    int ans = INF;
    for (int i = 0 ; i < n; i++) {
        int p = upper_bound(v, v+n, 2*v[i]) - v;
        ans = min(ans, i + n-p);
        debug("%d\n", p);
    }
    printf("%d\n", ans);
    return 0;
}


