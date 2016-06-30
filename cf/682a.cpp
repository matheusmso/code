#include <bits/stdc++.h>
using namespace std;

int n, m;
long long cn[5];
long long cm[5];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        cn[i%5]++;
    for (int i = 1; i <= m; i++)
        cm[i%5]++;
    long long ans = cn[0]*cm[0];
    ans += cn[1]*cm[4];
    ans += cn[2]*cm[3];
    ans += cn[3]*cm[2];
    ans += cn[4]*cm[1];
    cout << ans << endl;
    return 0;
}


