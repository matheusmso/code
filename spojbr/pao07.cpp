#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
int n, v[N], k;

bool ok(int t) {
    int ans = 0;
    for (int i = 0; i < k; i++)
        ans += v[i]/t;
    return ans >= n;
}

int main() {
    scanf(" %d", &n);
    scanf(" %d", &k);
    for (int i = 0; i < k; i++)
        scanf(" %d", v+i);
    int l = 0;
    int h = 1e8+7;
    while (l <= h) {
        int mid = l + (h-l)/2;
        if (ok(mid))
            l = mid+1;
        else
            h = mid-1;
    }
    printf("%d\n", h);
    return 0;
}


