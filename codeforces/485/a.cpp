#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int a, m, f[N];

int main() {
    scanf(" %d %d", &a, &m);
    while (1) {
        if (a%m == 0) {
            printf("Yes\n");
            return 0;
        }
        if (f[a%m]) {
            printf("No\n");
            return 0;
        }
        f[a%m]++;
        a += a%m;
        a %= m;
    }
    return 0;
}


