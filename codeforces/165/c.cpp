#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6+7;
int k;
char s[N];
map<int, lint> f;

int main() {
    scanf(" %d", &k);
    scanf(" %s", s);
    int n = strlen(s);
    int acc = 0;
    lint ans = 0;
    f[0] = 1;
    for (int i = 0; i < n; i++) {
        acc += s[i]-'0';
        ans += f[acc-k];
        f[acc]++;
    }
    printf("%lld\n", ans);
    return 0;
}


