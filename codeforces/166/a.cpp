#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 57;
int n, k;
pair<int, int> p[N];

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        p[i] = {x, -y};
    }
    sort(p, p+n);
    int l, u;
    for (l = n-k; l >= 1; l--)
        if (p[l] != p[l-1]) break;
    for (u = n-k; u <= n-2; u++)
        if (p[u] != p[u+1]) break;
    printf("%d\n", u-l+1);
    return 0;
}


