#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
lint n, m;

int main() {
    cin >> n >> m;
    lint x;
    cin >> x;
    lint ans = x-1;
    for (int i = 1; i < m; i++) {
        lint y;
        cin >> y;
        if (x <= y)
            ans += y-x;
        else
            ans += n-x+y;
        x = y;
    }
    cout << ans << endl;
    return 0;
}

