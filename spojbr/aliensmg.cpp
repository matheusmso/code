#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int n;
char s[N];

int main() {
    while (scanf(" %d", &n) && n) {
        map<string, int> m;
        for (int i = 0; i < n; i++) {
            scanf(" %s", s);
            int sz = strlen(s);
            sort(s, s+sz);
            m[string(s, sz)]++;
        }
        printf("%d\n", m.size());
    }
    return 0;
}


