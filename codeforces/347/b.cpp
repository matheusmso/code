#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int n, v[N];

int main() {
    scanf(" %d", &n);
    int ans= 0;
    for (int i = 0; i < n; i++) {
        scanf(" %d", v+i);
        if (i == v[i]) ans++;
    }
    int best = 0;
    for (int i = 0; i < n; i++)
        if (i != v[i])
            if (i == v[v[i]]) best = 2;
    ans += best;
    if (best == 0)
        ans++;
    ans = min(ans, n);
    printf("%d\n", ans);
    return 0;
}

        
    
