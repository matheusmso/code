#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 6e5+7;
int n, op[N], k[N], t;
char dir[N];
struct q {
    int x, y, s;
    q(int _x, int _y, int _s) : x(_x), y(_y), s(_s) {}
    q() {}
    bool operator<(q a) {
        return s < a.s;
    }
};
vector<q> v;

bool comp(q a, q b) {
    return a.s < b.s;
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        v.push_back(q(x, y, abs(x)+abs(y)));
    }
    sort(v.begin(), v.end());
    for (q a : v) {
        if (a.x > 0) {
            op[t] = 1; k[t] = a.x; dir[t] = 'R';
            t++;
        }
        if (a.x < 0) {
            op[t] = 1; k[t] = -a.x; dir[t] = 'L';
            t++;
        }
        if (a.y > 0) {
            op[t] = 1; k[t] = a.y; dir[t] = 'U';
            t++;
        }
        if (a.y < 0) {
            op[t] = 1; k[t] = -a.y; dir[t] = 'D';
            t++;
        }
        op[t++] = 2;
        if (a.x > 0) {
            op[t] = 1; k[t] = a.x; dir[t] = 'L';
            t++;
        }
        if (a.x < 0) {
            op[t] = 1; k[t] = -a.x; dir[t] = 'R';
            t++;
        }
        if (a.y > 0) {
            op[t] = 1; k[t] = a.y; dir[t] = 'D';
            t++;
        }
        if (a.y < 0) {
            op[t] = 1; k[t] = -a.y; dir[t] = 'U';
            t++;
        }
        op[t++] = 3;
    }
    printf("%d\n", t);
    for (int i = 0; i < t; i++) {
        if (op[i] == 1)
            printf("%d %d %c\n", op[i], k[i], dir[i]);
        else
            printf("%d\n", op[i]);
    }
    return 0;
}


