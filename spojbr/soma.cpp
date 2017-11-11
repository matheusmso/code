#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;

int main() {
    int ans = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        ans += x;
    }
    printf("%d\n", ans);
    return 0;
}


