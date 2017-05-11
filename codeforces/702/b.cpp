#include <bits/stdc++.h>
using namespace std;

map <long long, long long> m;
int n;

int main() {
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        for (int i = 0; i < 32; i++) {
            long long cur = 1ll<<i;
            cur -= a;
            ans += m[cur];
        }
        m[a]++;
    }
    cout << ans << endl;
    return 0;
}

