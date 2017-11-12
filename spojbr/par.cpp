#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, t;
char s[2][15];

int main() {
    while (scanf(" %d", &n) && n) {
        printf("Teste %d\n", ++t);
        for (int i = 0; i < 2; i++)
            scanf(" %s", s[i]);
        for (int i = 0; i < n; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            printf("%s\n", s[(x+y)%2]);
        }
    }
    return 0;
}


