#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int d, l, n, v[N];

int main() {
    scanf(" %d %d %d", &d, &l, &n);
    for (int i = 1; i <= n; i++)
        scanf(" %d", v+i);
    sort(v+1, v+n+1);
    v[0] = 0;
    v[++n] = d;
    long double ans = 0.0;
    for (int i = 0; i < n; i++) {
        int k = v[i+1]-v[i] - min(l, v[i+1]-v[i]);
        ans += (1.0*(k)*(k))/4.0;
    }
    ans /= 1.0*d;
    cout << fixed << setprecision(7) << ans << endl; 
    return 0;
}



