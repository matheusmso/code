#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n, s[N], e[N];

int main() {
    while (scanf(" %d", &n) != EOF) {
        for (int i = 0; i < n; i++)
            scanf(" %d", s+i);
        for (int i = 0; i < n; i++)
            scanf(" %d", e+i);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == e[i]) continue;
            int j;
            for (j = i+1; j < n; j++)
                if (s[j] == e[i])
                    break;
            ans += j-i;
            for ( ; j > i; j--) swap(s[j], s[j-1]);
        }
        printf("%d\n", ans);
    }
    return 0;
}


