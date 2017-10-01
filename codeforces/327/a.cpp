#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
int v[N], n;

int main() {
    scanf(" %d", &n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        scanf(" %d", v+i);
        if (v[i] == 1) {
            v[i] = -1;
            ans++;
        }
        else v[i] = 1;
    }
    int gmax = v[0], cur = v[0];
    for (int i = 1; i < n; i++) {
        cur = max(cur+v[i], v[i]);
        gmax = max(cur, gmax);
    }
    printf("%d\n", ans+gmax);
    return 0;
}
    
