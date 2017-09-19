#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
const int INF = 0x3f3f3f3f;
int n, m, v[N];

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < m; i++)
        scanf(" %d", v+i);
    sort(v, v+m);
    int ans = INF;
    for (int i = 0; i <= m-n; i++) 
        ans = min(ans, v[n+i-1]-v[i]);
    printf("%d\n", ans);
    return 0;
}
