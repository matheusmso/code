#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e5+7;
int n, v[N];
bool isfree[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    sort(v, v+n, greater<int>());
    memset(isfree, 1, sizeof(isfree));
    int cnt = 0;
    for (int i = 0, j = n/2; i < n && j < n; i++) {
        //debug("a%d %d\n", i, j);
        if (!isfree[i]) continue;
        //debug("b%d %d\n", i, j);
        while (j < n && (2*v[j] > v[i] || !isfree[j])) j++;
        //debug("c%d %d\n", i, j);
        if (j != n) {
            debug("%d %d %d %d\n", v[i], v[j], i, j);
            isfree[i] = isfree[j] = false;
            cnt++;
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        if (isfree[i])
            debug("f %d %d\n", i, v[i]);
    printf("%d\n", n-cnt);
    return 0;
}


