#include <bits/stdc++.h>
using namespace std;

const int N = (int)5e4+7;
int n, v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    int ans = 0;
    int best = 0;
    for (int i = 0; i < n; i++) {
        best = max(0, best+v[i]);
        ans = max(ans, best);
    }
    printf("%d\n", ans);
    return 0;
}

