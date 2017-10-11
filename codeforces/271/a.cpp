#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

bool ok(int k) {
    int f[10];
    memset(f, 0, sizeof(f));
    while (k) {
        f[k%10]++;
        k /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (f[i] > 1)
            return false;
    return true;
}

int main() {
    int n;
    scanf(" %d", &n);
    for (int i = n+1; i <= 20000; i++) {
        if (ok(i)) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}


