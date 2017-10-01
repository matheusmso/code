#include <bits/stdc++.h>
using namespace std;

const int N = 3e5+7;
int n, v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    sort(v, v+n);
    long long ans = 0;
    for (int i = 0; i < n; i++)
        ans += abs(v[i]-i-1);
    cout << ans << endl;
    return 0;
}
