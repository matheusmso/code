#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

char s[10];

int main() {
    for (int i = 0; i < 8; i++) {
        scanf(" %s", s);
        for (int j = 1; j < 8; j++) {
            if (s[j] == s[j-1]) {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}


