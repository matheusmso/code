#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int main() {
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        int x, y, z;
        scanf(" %d %d %d", &x, &y, &z);
        ans += min({x, y, z});
    }
    printf("%d\n", ans);
    return 0;
}


