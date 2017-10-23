#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e3+7;
char s[N];
int a[N], b[N];

int main() {
    scanf(" %s", s+1);
    int n = strlen(s+1);

    a[0] = b[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] == 'a') {
            a[i] = a[i-1] + 1;
            b[i] = b[i-1];
        }
        else {
            b[i] = b[i-1] + 1;
            a[i] = a[i-1];
        }
    }
    int ans = 0;
    int l, m, r;
    for (int i = 0; i <= n; i++) {
        for (int j = i; j <= n; j++)
            ans = max(ans, a[i] + b[j] - b[i] + a[n] - a[j]);
    }
    printf("%d\n", ans);
    return 0;
}


