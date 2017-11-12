#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, v[] = {100, 50, 20, 10, 5, 2, 1};

int main() {
    scanf(" %d", &n);
    printf("%d\n", n);
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", n/v[i], v[i]);
        n %= v[i];
    }
    return 0;
}


