#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1<<16+7;
int t, n, k, id[N], v[N];

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d %d", &n, &k);
        n = 1<<n;
        for (int i = 0; i < n; i++) {
            scanf(" %d", v+i+n);
            id[i+n] = i;
        }
        for (int i = n-1; i >= 1; i--) {
            if (v[2*i] > v[2*i+1]) {
                id[i] = id[2*i];
                v[i] = min(v[id[i]+n], v[2*i]-v[2*i+1]+k);
            }
            else if (v[2*i+1] > v[2*i]) {
                id[i] = id[2*i+1];
                v[i] = min(v[id[i]+n], v[2*i+1]-v[2*i]+k);
            }
            else {
                id[i] = min(id[2*i], id[2*i+1]);
                v[i] = min(v[id[i]+n], k);
            }
        }
        printf("%d\n", id[1]+1);
        int a = id[1] + n;
        while (a > 1) {
            if (id[a] == id[1])
                a ^= 1;
            printf("%d", id[a]+1);
            a /= 2;
            if (a > 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


