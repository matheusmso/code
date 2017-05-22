#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int v[N], n, k;

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    int ans = 0;
    for (int l = 0, r = 0; l < n || r < n; l++) {
        //(v[r]-v[l]+1)-(r-l+1)
        while (r < n && v[r]-v[l]-r+l <= k) 
            r++;
        ans = max(ans, r-l+k); 
    }
    printf("%d\n", ans);
    return 0;
}


