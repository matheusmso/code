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
    int s = -1;
    for (int i = 1; i < n; i++)
        if (v[i] < v[i-1]) {
            s = i;
            break;
        }
    if (s != -1) {
        for (int i = 1; i < n; i++) {
            int a = (s+i-1+n)%n;
            int p = (s+i+n)%n;
            if (v[p] < v[a]) {
                printf("-1\n");
                return 0;
            }
        }
        printf("%d\n", n-s);
    }
    else printf("0\n");
    return 0;
}


