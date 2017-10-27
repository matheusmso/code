#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int o[N], p[N], b[N], r[N], n, m;

bool comp(int i, int j) {
    if (o[i]+p[i]+b[i] > o[j]+p[j]+b[j]) return true;
    if (o[i]+p[i]+b[i] < o[j]+p[j]+b[j]) return false;
    return i < j;
}

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 1; i <= n; i++)
        r[i] = i;
    for (int i = 0; i < m; i++) {
        int x, y, z;
        scanf(" %d %d %d", &x, &y, &z);
        o[x]++;
        p[y]++;
        b[z]++;
    }
    sort(r+1, r+1+n, comp);
    for (int i = 1; i <= n; i++)
        printf("%d ", r[i]);
    printf("\n");
    return 0;
}


