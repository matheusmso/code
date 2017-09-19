#include <bits/stdc++.h>
using namespace std;

int n, x, v[107], k, ans;
set<int> s;

int main() {
    scanf(" %d %d", &n, &x);
    for (int i = 0; i < n; i++) {
        scanf(" %d", &k);
        s.insert(k);
    }
    for (int i = 0; i < x; i++) {
        if (s.count(i) == 0) 
            ans++;
    }
    ans += s.count(x);
    printf("%d\n", ans);
    return 0;
}



