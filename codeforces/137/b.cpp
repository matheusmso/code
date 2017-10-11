#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e3+7;
int f[N], n;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        f[x]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (!f[i])
            ans++;
    printf("%d\n", ans);
    return 0;
}


