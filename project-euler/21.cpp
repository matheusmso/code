#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
int d[N], v[N];

int main() {
    for (int i = 1; i <= 1e4; i++) {
        for (int j = 2; j*j <= i; j++) {
            if (i%j == 0) {
                d[i] += j;
                if (j != i/j)
                    d[i] += i/j;
            }
        }
        d[i]++;
    }
    lint ans = 0;
    for (int i = 1; i <= 1e4; i++) {
        if (v[i]) continue;
        if (d[i] <= 1e4 && d[d[i]] == i && d[i] != i) {
            ans += i;
            v[i] = 1;
        }
    }
    printf("%d\n", ans);
    return 0;
}


