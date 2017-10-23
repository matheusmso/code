#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;


int main() {
    scanf(" %d", &n);
    for (int i = 1; i*i < n; i++) {
        int t = 2*n - (i*(i+1));
        if (t < 0) continue;
        int a = ceil(sqrt(t));
        for (int j = max(0, a-50); j < a+50; j++)
            if (j*(j+1) == t) {
                printf("YES\n");
                return 0;
            }
    }
    printf("NO\n");
    return 0;
}


