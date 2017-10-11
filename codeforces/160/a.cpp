#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int v[N], n, sum;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        scanf(" %d", v+i);
        sum += v[i];
    }
    sort(v, v+n);
    int c = 0;
    for (int i = n-1; i >= 0; i--) {
        c += v[i];
        if (c > sum/2) {
            printf("%d\n", n-i);
            break;
        }
    }
    return 0;
}


