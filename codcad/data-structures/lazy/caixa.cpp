#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n, q, v[N], seg[4*N], lazy[4*N];

void build(int id = 1, int l = 0, int r = n) {
    if (l + 1 == r) {
        seg[id] = v[l];
        return;
    }
    int mid = (l+r)/2;
    build(2*id, l, mid);
    build(2*id+1, mid, r);
    seg[id] = seg[2*id] + seg[2*id+1];
}

void upd(int id, int l, int r, int x) {
    //printf("%d %d %d %d\n", id, l, r, x);
    lazy[id] = x;
    seg[id] = (r-l)*x;
}

void shift(int id, int l, int r) {
    //printf("%d %d %d\n", id, l, r);
    int mid = (l+r)/2;
    if (lazy[id]) {
        upd(2*id, l, mid, lazy[id]);
        upd(2*id+1, mid, r, lazy[id]);
    }
    lazy[id] = 0;
}

void increase(int x, int y, int v, int id = 1, int l = 0, int r = n) {
    //printf("%d %d %d %d %d %d\n", x, y, v, id, l, r);
    if (x >= r || y <= l) return;
    if (x <= l && y >= r) {
        upd(id, l, r, v);
        return;
    }
    shift(id, l, r);
    int mid = (l+r)/2;
    increase(x, y, v, 2*id, l, mid);
    increase(x, y, v, 2*id+1, mid, r);
    seg[id] = seg[2*id]+seg[2*id+1];
}

int sum(int x, int y, int id = 1, int l = 0, int r = n) {
    if (x >= r || y <= l) return 0;
    if (x <= l && y >= r) return seg[id];
    shift(id, l, r);
    int mid = (l+r)/2;
    return sum(x, y, 2*id, l, mid) + sum(x, y, 2*id+1, mid, r);
}

int main() {
    scanf(" %d %d", &n, &q);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    build();
    while (q--) {
        int o, a, b, k;
        scanf(" %d %d %d", &o, &a, &b);
        if (o == 1) {
            scanf(" %d", &k);
            increase(a-1, b, k);
        }
        else
            printf("%d\n", sum(a-1, b));
        //for (int i = 0; i < 25; i++)
            //printf("i = %d seg %d lazy %d\n", i, seg[i], lazy[i]);
    }
    return 0;
}

