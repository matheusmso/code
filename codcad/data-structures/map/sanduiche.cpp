#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e6+7;
int n, d, t, v[N], acc, ans;

int main() {
    scanf(" %d %d", &n, &d);
    for (int i = 0; i < n; i++) {
        scanf(" %d", v+i);
        acc += v[i];
    }
    t = acc - d;
    //ans += (t == 0) * (n - 1);
    acc = 0;
    int i = 0;
    for (int j = 0; j < n; j++) {
        acc += v[j];
        while (i < j && acc > d) {
            acc -= v[i];
            i++;
        }
        if (acc == d)
            ans++;
    }
    i = 0;
    acc = 0;
    for (int j = 1; j < n; j++) {
        while (i < j-1 && acc > t) {
            acc -= v[i+1];
            i++;
        }
        if (acc == t)
            ans++;
        acc += v[j];
    }
    printf("%d\n", ans);
    return 0;
}

