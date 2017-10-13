#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
int n;
vector<int> r[N], c[N];
int p[N], s[N], cmp;

int find(int k) {
    if (p[k] == k) return k;
    return p[k] = find(p[k]);
}

void join(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b) return;
    cmp--;
    if (s[a] > s[b]) {
        p[b] = a;
        s[a] += s[b];
    }
    else {
        p[a] = b;
        s[b] += s[a];
    }
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        p[i] = i;
        s[i] = 1;
    }
    cmp = n;
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        if (r[x].size() == 0 && c[y].size() == 0) {
            r[x].push_back(i);
            c[y].push_back(i);
        }
        else {
            if (r[x].size()) join(i, r[x][0]);
            if (c[y].size()) join(i, c[y][0]);
            if (r[x].size() == 0) r[x].push_back(i);
            if (c[y].size() == 0) c[y].push_back(i);
        }
    }
    printf("%d\n", cmp-1);
    return 0;
}


