#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int tot, n, k, v[N];

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    sort(v, v+n);
    for (int i = 0; i < k; i++)
        tot += v[i];
    tot += 99;
    tot /= 100;
    printf("%d\n", tot);
    return 0;
}


