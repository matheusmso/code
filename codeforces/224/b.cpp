#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int v[N], f[N], n, k, cnt;

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf(" %d", v+i);
        f[v[i]]++;
        if (f[v[i]] == 1)
            cnt++;
    }
    int i = n-1;
    if (cnt < k) {
        printf("-1 -1\n");
        return 0;
    }
    while (1) {
        if (f[v[i]] == 1 && cnt == k) break;
        f[v[i]]--;
        if (f[v[i]] == 0)
            cnt--;
        i--;
    }
    int j = 0;
    while (1) {
        if (f[v[j]] == 1 && cnt == k) break;
        f[v[j]]--;
        if (f[v[j]] == 0)
            cnt--;
        j++;
    }
    printf("%d %d\n", j+1, i+1);
    return 0;
}


