#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
map<string, lint> mp;
int m, n;
char s[N];

int main() {
    scanf(" %d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        lint x;
        scanf(" %s %lld", s, &x);
        mp[string(s, strlen(s))] = x;
    }
    for (int i = 0; i < n; i++) {
        lint ans = 0;
        while (scanf(" %[^\n]", s) && s[0] != '.') {
            char *p = strtok(s, " ");
            while (p != NULL) {
                ans += mp[string(p, strlen(p))];
                p = strtok(NULL, " ");
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}


