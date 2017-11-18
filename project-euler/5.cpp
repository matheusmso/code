#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

lint n;

int main() {
    n = 21;
    while (n++) {
        int cnt = 0;
        for (int i = 1; i <= 20; i++)
            if (n%i != 0) {
                cnt++;
                break;
            }
        if (cnt == 0) break;
    }
    printf("%lld\n", n);
    return 0;
}


