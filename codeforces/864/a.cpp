#include <bits/stdc++.h>
using namespace std;

int v[107], ans[107], ind[107], n, c;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int t;
        scanf(" %d", &t);
        v[t]++;
    }
    for (int i = 1; i <= 100; i++)
        if (v[i]) {
            ans[c] = v[i];
            ind[c++] = i;
        }
    if (c != 2) {
        printf("NO\n");
        return 0;
    }
    if (ans[0] != ans[1] || ind[0] == ind[1]) {
        printf("NO\n");
        return 0;
    }
    printf("YES\n");
    printf("%d %d\n", ind[0], ind[1]);
    return 0;
}
