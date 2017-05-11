#include <bits/stdc++.h>
using namespace std;

int a[10000];

int main() {
    a[0] = 1;
    a[1] = 2;
    int i;
    for (i = 2; a[i-1] < 4000000; i++)
        a[i] = a[i-1] + a[i-2];
    long long ans = 0;
    for (int j = 0; j < i-1; j++)
        if (a[j]%2 == 0)
            ans += a[j];
    cout << ans << endl;
    return 0;
}

