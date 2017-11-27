#include <iostream>
using namespace std;

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 37;
int a[N], c[N], d[N], x;

int main() {
    d[0] = 1;
    a[1] = 1;
    for (int i = 2; i < 31; i++) {
        c[i] = a[i-1];
        a[i] = d[i-1] + c[i-1];
        d[i] = d[i-2] + 2*a[i-1];
    }
    while (scanf(" %d", &x) && x != -1)
        printf("%d\n", d[x]);
    return 0;
}


