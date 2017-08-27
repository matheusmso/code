#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int d, l, n, v[N];
int runs = 1000;

int main() {
    scanf(" %d %d %d", &d, &l, &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    sort(v, v+n);
    double ans = 0;
    for (int times = 0; times < runs; times++) {
        int pos = rand() % d + 1;
        int a = lower_bound(v, v+n, pos)-v;
        int b = 
        printf("%d %d %d\n", pos, a, b);
        if (pos - a < l)
            continue;
        ans += abs(min(pos-a-l, b-pos));
    }
    printf("%f\n", ans/runs);
    return 0;
}



