#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int k, l, m, n, d;

int main() {
    scanf(" %d %d %d %d %d", &k, &l, &m, &n, &d);
    int cnt = 0;
    for (int i = 1; i <= d; i++)
        if (i%k != 0  && i%l != 0 && i%m != 0 && i%n != 0)
            cnt++;
    printf("%d\n", d-cnt);
    return 0;
}


