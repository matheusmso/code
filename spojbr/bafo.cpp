#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int r, t;
char s[][15] = {"Aldo", "Beto"};

int main() {
    while (scanf(" %d", &r) && r) {
        printf("Teste %d\n", ++t);
        int tx = 0;
        int ty = 0;
        for (int i = 0; i < r; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            tx += x;
            ty += y;
        }
        printf("%s\n", s[ty > tx]);
    }
    return 0;
}


