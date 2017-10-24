#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e5+7;
int v[N], n;
lint sum;
map<lint, lint> f;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", v+i);
        sum += v[i];
    }
    if (sum%3 != 0) {
        printf("0\n");
        return 0;
    }
    lint ans = 0;
    lint acc = 0;
    lint k = sum/3;
    for (int i = 0; i < n-1; i++) {
        acc += v[i];
        if (acc == 2*k)
            ans += f[acc-k];
        f[acc]++;
    }
    printf("%lld\n", ans);
    return 0;
}


