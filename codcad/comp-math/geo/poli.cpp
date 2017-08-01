#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int v[N], n;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    sort(v, v+n);
    int ans = 0, acc = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < acc)
            ans = i+1;
        acc += v[i];
    }
    printf("%d\n", ans);
    return 0;
}

