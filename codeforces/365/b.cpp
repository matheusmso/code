#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    if (n <= 2) {
        printf("%d\n", n);
        return 0;
    }
    int len = 2;
    int ans = 2;
    for (int i = 2; i < n; i++) {
        if (v[i] == v[i-1] + v[i-2]) len++;
        else len = 2;
        ans = max(ans, len);
    }
    printf("%d\n", ans);
    return 0;
}
