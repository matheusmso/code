#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
pair<int, int> p[N];
int n;
int mi, ma;

int main() {
    mi = 1e9+7;
    ma = -1;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int l, r;
        scanf(" %d %d", &l, &r);
        p[i] = {l, r};
        mi = min(mi, l);
        ma = max(ma, r);
    }
    int i = 1;
    for (pair<int, int> k : p) {
        if (k.first <= mi && k.second >= ma) {
            printf("%d\n", i);
            return 0;
        }
        i++;
    }
    printf("-1\n");
    return 0;
}


