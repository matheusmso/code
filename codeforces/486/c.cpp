#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int n, p, ans, c[N], a, b;
char s[N];

char op(int k) {
    return s[n-k-1];
}

int main() {
    scanf(" %d %d", &n, &p);
    scanf(" %s", s);
    p--;
    p = min(p, n-p-1);
    for (int i = 0; i < n/2 + n%2; i++)
        if (s[i] != op(i)) {
            int t = abs(s[i]-op(i));
            c[i] = min(t, 26-t);
            ans += c[i];
        }
    for (int i = 0; i < n/2 + n%2; i++)
        if (c[i]) 
            a = max(a, i-p);
    for (int i = 0; i < n/2 + n%2; i++)
        if (c[i])
            b = max(b, p-i);
    printf("%d\n", min(2*a+b, 2*b+a) + ans);
    return 0;
}

