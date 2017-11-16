#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, v[10], t;
map<int, int> m[6];
char c;

int main() {
    while (scanf(" %d", &n) && n) {
        for (int ii = 0; ii < n; ii++) {
            for (int i = 0; i < 10; i++)
                scanf(" %d", v+i);
            for (int i = 0; i < 6; i++) {
                scanf(" %c", &c);
                int x = c-'A';
                m[i][v[2*x]]++;
                m[i][v[2*x+1]]++;
            }
        }
        printf("Teste %d\n", ++t);
        for (int i = 0; i < 6; i++)
            for (pair<int, int> p : m[i])
                if (p.second == n)
                    printf("%d ", p.first);
        printf("\n\n");
        for (int i = 0; i < 6; i++)
            m[i].clear();
    }
    return 0;
}


