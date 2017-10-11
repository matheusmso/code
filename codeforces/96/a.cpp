#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
char s[N];

int main() {
    scanf(" %s", s);
    int n = strlen(s);
    int ma = 0, cur = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') cur = 0;
        else cur++;
        ma = max(ma, cur);
    }
    cur = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') cur = 0;
        else cur++;
        ma = max(ma, cur);
    }
    printf("%s\n", ma >= 7 ? "YES" : "NO");
    return 0;
}


