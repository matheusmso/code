#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 4e5+7;
int t[N], op[N], n, m;

void build() {
    for (int i = n-1; i > 0; i--) {
        if (op[2*i] == 0) { //or
            t[i] = t[2*i] | t[2*i+1];
            op[i] = 1;
        }
        else { //xor
            t[i] = t[2*i] ^ t[2*i+1];
            op[i] = 0;
        }
    }
}

void update(int p, int v) {
    t[p+n] = v;
    for (int i = (p+n)/2; i > 0; i /= 2) {
        if (op[2*i] == 0) //or
            t[i] = t[2*i] | t[2*i+1];
        else  //xor
            t[i] = t[2*i] ^ t[2*i+1];
    }
}

int main() {
    scanf(" %d %d", &n, &m);
    n = 1<<n;
    for (int i = 0; i < n; i++)
        scanf(" %d", t+i+n);
    build();
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        update(x-1, y);
        printf("%d\n", t[1]);
    }
    return 0;
}


