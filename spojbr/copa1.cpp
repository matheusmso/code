#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

vector<int> c[5];

int main() {
    for (int i = 0; i < 16; i++)
        c[0].push_back(i);
    int g = 8;
    for (int r = 1; r <= 4; r++) {
        for (int i = 0; i < g; i++) {
            int x, y;
            scanf(" %d %d", &x, &y);
            if (x > y)
                c[r].push_back(c[r-1][2*i]);
            else
                c[r].push_back(c[r-1][2*i+1]);
        }
        g /= 2;
    }
    printf("%c\n", c[4][0]+'A');
    return 0;
}


