#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, x;

int main() {
    scanf(" %d %d", &n, &x);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int k;
        scanf(" %d", &k);
        sum += k;
    }
    sum = abs(sum);
    printf("%d\n", (sum+x-1)/x);
    return 0;
}


