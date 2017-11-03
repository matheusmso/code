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
    int c = 0;
    int i;
    for (i = n-1; i >= 0 && c < 6; i--)
        if (s[i] == '0')
            c++;
    if (c == 6) {
        for (i; i >= 0; i--)
            if (s[i] == '1') {
                printf("yes\n");
                return 0;
            }
    }
    printf("no\n");
    return 0;
}


