#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
char s[N], t[N];

int main() {
    while (~scanf(" %s %s", s, t)) {
        int n = strlen(s);
        int m = strlen(t);
        int c = 0;
        for (int i = 0; i < m && c < n; i++) 
            if (s[c] == t[i])
                c++;
        if (c == n)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}


