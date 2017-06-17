#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n, m, v[N], seg[4*N];

void build(int node = 1, int l = 0, int r = n) {
    if (l + 1 == r) {
        seg[node] = v[l];
        return;
    }
    int mid = (l+r)/2;
    build(2*node, l, mid);
    build(2*node+1, mid, r);
    seg[node] = seg[2*node] + seg[2*node+1];
}

void up(int pos, int value, int node = 1, int l = 0, int r = n) {
    seg[node] += value - v[pos];
    if (l + 1 == r) {
        v[pos] = value;
        return;
    }
    int mid = (l+r)/2;
    if (pos < mid) up(pos, value, 2*node, l, mid);
    else up(pos, value, 2*node+1, mid, r);
}

int query(int x, int y, int node = 1, int l = 0, int r = n) {
    if (x >= r || y <= l) return 0;
    if (x <= l && y >= r) return seg[node];
    int mid = (l+r)/2;
    return query(x, y, 2*node, l, mid) + 
        query(x, y, 2*node+1, mid, r);
}

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    build();
    for (int i = 0; i < n; i++) {
        int o, x, y;
        scanf(" %d %d %d", &o, &x, &y);
        if (o == 1) up(x, y);
        else printf("%d\n", query(x, y));
    }
    return 0;
}

