#include <bits/stdc++.h>
using namespace std;

struct ret {
    int id, x, y;
    //ret() : id(0),x(0),y(0) {}
    ret(int id, int x, int y):id(id), x(x), y(y) {}
};
vector<ret> r;

int n, p[10007], q[10007];

bool comp1(ret a, ret b) {
    return a.x < b.x;
}

bool comp2(ret a, ret b) {
    return a.y < b.y;
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf(" %d %d", &x, &y);
        r.push_back(ret(i, x, y));
    }
    //sort(r, r+n, comp1);
    int aux = 0;
    p[r[0].id] = 0;
    for (int i = 1; i < n; i++) {
        if (r[i].x > r[i-1].x)
            p[r[i].id] = ++aux;
        else
            p[r[i].id] = p[r[i-1].id];
    }
    //sort(r, r+n, comp2);
    aux = 0;
    q[r[0].id] = 0;
    for (int i = 1; i < n; i++) {
        if (r[i].y > r[i-1].y)
            q[r[i].id] = ++aux;
        else
            p[r[i].id] = p[r[i-1].id];
    }
    return 0;
}

