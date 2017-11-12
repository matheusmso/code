#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

lint n;
int t;

int main() {
    while (scanf(" %lld", &n) && n) {
        n = (1<<n)-1;
        printf("Teste %d\n", ++t);
        printf("%lld\n", n);
    }
    return 0;
}


