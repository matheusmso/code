#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int v[N], n;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    int ans = 0;
    int cur = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] >= v[i-1])
            cur++;
        else cur = 1;
        ans = max(ans, cur);
    }
    cur = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] <= v[i-1])
            cur++;
        else cur = 1;
        ans = max(ans, cur);
    }
    printf("%d\n", ans);
    return 0;
}


