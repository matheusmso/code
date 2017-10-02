#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
lint ans[10], x, y, n;
const lint M = 1e9+7;

int main() {
    scanf(" %lld %lld", &x, &y);
    x = (x+M)%M;
    y = (y+M)%M;
    ans[0] = x;
    ans[1] = y;
    for (int i = 2; i < 6; i++)
        ans[i] = (ans[i-1]-ans[i-2]+M)%M;
    scanf(" %lld", &n);
    printf("%lld\n", ans[(n-1)%6]);
    return 0;
}

    
    
