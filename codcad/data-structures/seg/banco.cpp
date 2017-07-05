#include <bits/stdc++.h>
using namespace std;

const int inf = 0x3f3f3f3f;
const int N = (int)1e5+7;
int v[N], q, a, b, t, n;

struct node {
    pair<int, int> bst;
    pair<int, int> pre;
    pair<int, int> suf;
    pair<int, int> tot;
};
node seg[4*N];

pair<int, int> operator +(const pair<int, int>& u, pair<int, int>& v) {
    return make_pair(u.first+v.first, u.second+v.second);
}

node join(node a, node b) {
    if (a.bst.second == 0) return b;
    if (b.bst.second == 0) return a;
    node aux;
    aux.tot = a.tot+b.tot;
    aux.bst = max({a.bst, b.bst, a.suf+b.pre});
    aux.pre = max(a.pre, a.tot+b.pre);
    aux.suf = max(b.suf, b.tot+a.suf);
    return aux;
}

void build(int no = 1, int l = 0, int r = n) {
    if (l + 1 == r) {
        seg[no].bst = make_pair(v[l], 1);
        seg[no].pre = make_pair(v[l], 1);
        seg[no].suf = make_pair(v[l], 1);
        seg[no].tot = make_pair(v[l], 1);
        return;
    }
    int mid = (l + r)/2;
    build(2*no, l, mid);
    build(2*no+1, mid, r);
    seg[no] = join(seg[2*no], seg[2*no+1]);
}

node query(int x, int y, int no = 1, int l = 0, int r = n) {
    if (x >= r || y <= l) return {{0,0}, {0,0}, {0,0}, {0,0}};
    if (x <= l && y >= r) return seg[no];
    int mid = (l + r)/2;
    return join(query(x, y, 2*no, l, mid), query(x, y, 2*no+1, mid, r));
}

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d", &n);
        for (int i = 0; i < n; i++)
            scanf(" %d", v+i);
        build();
        scanf(" %d", &q);
        while (q--) {
            scanf(" %d %d", &a, &b);
            node ans = query(a-1, b);
            printf("%d %d\n", ans.bst.first, ans.bst.second);
        }
    }
    return 0;
}

