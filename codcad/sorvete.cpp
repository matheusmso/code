#include <bits/stdc++.h>
using namespace std;

const int N = (int)5e3+7;
int p, s;
pair<int, int> v[N];

int main() {
    scanf(" %d %d", &p, &s);
    for (int i = 0; i < s; i++) {
        int a, b;
        scanf(" %d %d", &a, &b);
        v[i] = make_pair(a, b);
    }
    sort(v, v+s);
    int l = v[0].first;
    int r = v[0].second;
    for (int i = 1; i < s; i++) {
        int x = v[i].first;
        int y = v[i].second;
        if (x > r) {
            printf("%d %d\n", l, r);
            l = x;
            r = y;
        } 
        else if (y > r)
            r = y;
    }
    printf("%d %d\n", l, r);
    return 0;
}

