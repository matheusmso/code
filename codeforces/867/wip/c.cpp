#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 1e5+7;
lint n, S, a[N], b[N], s[N];

int main() {
    scanf(" %lld %lld", &n, &S);
    lint sum = 0;
    for (int i = 0; i < n; i++) {
        scanf(" %lld %lld %lld", s+i, a+i, b+i);
        sum += s[i];
    }
    int pizzas = (sum + S - 1)/S;
    lint sa = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > b[i])
            sa += s[i];
    int pa = (sa + S - 1)/S;
    
    printf("%lld\n", ans);
    return 0;
}

