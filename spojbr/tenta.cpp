#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e1+7;
int n, v[N];

int main() {
    while (scanf(" %d", &n) && n) {
        for (int i = 0; i < n; i++)
            scanf(" %d", v+i);
        sort(v, v+n);
        do {
            for (int i = 0; i < n; i++)
                printf("%d%c", v[i], " \n"[i == n-1]);
        } while (next_permutation(v, v+n));
        printf("\n");
    }
    return 0;
}


