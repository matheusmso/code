#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;

int main() {
    scanf(" %d", &n);
    printf("%d\n", max({n, n/10, 10*(n/100) + n%10}));
    return 0;
}


