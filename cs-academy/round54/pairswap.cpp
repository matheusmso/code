#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
const int N = 1e5+7;
int n, k, v[N], seg[4*N];

void build(int node = 1, int l = 0, int r = n) {
    if (l + 1 == r) {
        seg[node] = v[l];
        return;
    }
    int mid = (l + r)/2;
    build(2*node, l, mid);
    build(2*node+1, mid, r);
    seg[node] = min(seg[2*node], seg[2*node+1]);
}

int query(int x, int y, int node = 1, int l = 0, int r = n) {
    if (x >= r || y <= l) return INF;
    if (x <= l && y >= r) return seg[node];
    int mid = (l + r)/2;
    return min (query(x, y, 2*node, l, mid), 
            query(x, y, 2*node+1, mid, r));
}

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    build();
    bool f = false;
    for (int i = 0; i < n - 1 && !f; i++) {
        int t = query(i+1, min(n, i+k+1));
        if (t < v[i]) {
            for (int j = min(n, i+k+1)-1; j >= i+1 && !f; j--) {
                if (v[j] == t) {
                    swap(v[j], v[i]);
                    f = true;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    return 0;
}
