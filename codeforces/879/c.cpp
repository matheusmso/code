#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e1+7;
int n, bit[N], ori[N], sw[N];

//-1 original

int main() {
    scanf (" %d", &n);
    memset(ori, -1, sizeof(ori));
    for (int i = 0; i < n; i++) {
        char c;
        int d;
        scanf(" %c %d", &c, &d);
        if (c == '|') {
            for (int i = 0; i < 10; i++) {
                if (d&(1<<i)) {
                ori[i] = 1;
                bit[i] = 1;
                }
            }
        }
        else if (c == '&') {
            for (int i = 0; i < 10; i++) {
                if ((d&(1<<i)) == 0) {
                    ori[i] = 0;
                    bit[i] = 0;
                }
            }
        }
        else {
            for (int i = 0; i < 10; i++) {
                if (d&(1<<i)) {
                    if (ori[i] == -1)
                        sw[i] = 1 - sw[i];
                    else
                        bit[i] = 1 - bit[i];
                }
            }
        }
    }
    int mo = 0;
    int ma = (1<<10)-1;
    int mx = 0;
    for (int i = 0; i < 10; i++) {
        if (ori[i] != -1) {
            if (bit[i] == 1)
                mo |= (1<<i);
            else 
                ma ^= (1<<i);
        }
        else {
            if (sw[i]) 
                mx |= (1<<i);
        }
    }
    printf("3\n");
    printf("| %d\n", mo);
    printf("& %d\n", ma);
    printf("^ %d\n", mx);
    return 0;
}


