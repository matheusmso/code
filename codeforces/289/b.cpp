#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
int g[N][N], n, m, d;
vector<int> v;

void end() {
    printf("-1\n");
    exit(0);
}


int main() {
    scanf(" %d %d %d", &n, &m, &d);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) 
            scanf(" %d", &g[i][j]);
    int s = g[0][0]%d;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j]%d != s) end();
            else {
                g[i][j] -= s;
                g[i][j] /= d;
                v.push_back(g[i][j]);
            }
        }
    }
    sort(v.begin(), v.end());
    if (v.size()%2 == 1) {
        int b = v[v.size()/2];
        for (int k : v)
            ans += abs(k-b);
    }
    else {
        ans = INF;
        for (int i = 0; i < 2; i++) {
            int cur = 0;
            int  b = v[v.size()/2 - 1 + i];
            for (int k : v)
                cur += abs(b-k);
            ans = min(ans, cur);
        }
    }
    printf("%d\n", ans);
    return 0;
}


