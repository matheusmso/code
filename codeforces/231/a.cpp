#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, ans;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int a, b, c;
        scanf(" %d %d %d", &a, &b, &c);
        int aux = a + b + c;
        ans += aux >= 2;
    }
    printf("%d\n", ans);
    return 0;
}


