#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
typedef long long lint;
int n, m;
lint v[N];

int main() {
    scanf(" %d %d", &n, &m);
    lint sum = 0;
    for (int i = 1; i <= n; i++)
        scanf(" %lld", v+i);
    for (int i = 0; i < m; i++) {
        int t, x, y;
        scanf(" %d %d", &t, &x);
        if (t == 1) {
            scanf(" %d", &y);
            v[x] = y-sum;
        }
        else if (t == 2)
            sum += x;
        else
            printf("%lld\n", v[x]+sum);
    }
    return 0;
}

        
        
        
