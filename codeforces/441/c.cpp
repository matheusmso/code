#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 3e2+7;
int n, m, k, g[N][N];
vector<pair<int, int>> v;

int main() {
    scanf(" %d %d %d", &n, &m, &k);
    int l = 0;
    int r = m;
    int d = n;
    int t = 0;
    int ttt = 0;
    int x = 0;
    int y = 0;
    while (ttt < n*m) {
        for (int i = l; i < r && ttt < n*m; i++) {
            v.push_back({t, i});
            g[t][i] = ttt++;
        }
        t++;
        for (int i = t; i < d && ttt < n*m; i++) {
            v.push_back({i, r-1});
            g[i][r-1] = ttt++;
        }
        r--;
        for (int i = r-1; i >= l && ttt < n*m; i--) {
            v.push_back({d-1, i});
            g[d-1][i] = ttt++;
        }
        d--;
        for (int i = d-1; i >= t && ttt < n*m; i--) {
            v.push_back({i, l});
            g[i][l] = ttt++;
        }
        l++;
    }
    int p = 0;
    while (k > 1) {
        for (p; p < v.size() && k > 1; p += 2) {
            printf("2 ");
            printf("%d %d ", v[p].first+1, v[p].second+1);
            printf("%d %d ", v[p+1].first+1, v[p+1].second+1);
            printf("\n");
            k--;
        }
    }
    printf("%d ", v.size()-p);
    for (p; p < v.size(); p++)
        printf("%d %d ", v[p].first+1, v[p].second+1);
    printf("\n");
    return 0;
}


