#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n, m, v[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++)
        scanf(" %d", v+i);
    for (int i = 0; i < n; i++) {
        int ans = 0;
        int a, b;
        scanf(" %d %d", &a, &b);
        for (int j = 0; j < m; j++)
            if (v[j] >= a && v[j] <= b)
                ans++;
        printf("%d\n", ans);
    }
    return 0;
}


