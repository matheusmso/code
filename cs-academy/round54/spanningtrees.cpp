#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e5+7;
int n, k, a[N], b[N], c[N];

int main() {
    scanf(" %d %d", &n, &k);
    int t = 1e9;
    int it = 0;
    if ((n == 3 || n == 2) && k == 0) {
        printf("-1\n");
        return 0;
    }
    for (int i = 1; i < n; i++) {
        a[it] = i;
        b[it] = i+1;
        c[it] = i;
        it++;
    }
    int cnt = n-1-k;
    for (int i = 3; i <= n && cnt > 0; i++) {
            a[it] = 1;
            b[it] = i;
            c[it] = t--;
            it++;
            cnt--;
    }
    if (cnt) {
        a[it] = 2;
        b[it] = 4;
        c[it] = t--;
        it++;
    }
    printf("%d\n", it);
    for (int i = 0; i < it; i++)
        printf("%d %d %d\n", a[i], b[i], c[i]);
    return 0;
}


