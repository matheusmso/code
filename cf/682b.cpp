#include <bits/stdc++.h>
using namespace std;

int n;
int v[100007];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", v+i);
    int ans = 1;
    sort(v, v+n);
    for (int i = 0; i < n; i++)
        if (v[i] >= ans)
            ans++;
    cout << ans << endl;
    return 0;
}


