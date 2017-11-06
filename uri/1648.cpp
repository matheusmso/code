#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 4e4+7;
int m;
double dp[N];
pair<int, int> v[20];
vector<pair<int, int>> d[20];

int main() {
    while (scanf(" %d", &m) && m) {
        for (int i = 0; i < m; i++) {
            int p, a, n;
            scanf(" %d %d %d", &p, &a, &n);
            v[i] = {p, a};
            if (n) {
                for (int j = 0; j < n; j++) {
                    int x, y;
                    scanf(" %d %d", &x, &y);
                    d[x-1].push_back({i, y});
                }
            }
        }
        dp[0] = 0.0;
        double ans = 1/.0;
        for (int i = 1; i < 1<<m; i++) {
            dp[i] = 1/.0;
            int s = 0;
            for (int j = 0; j < m; j++) {
                if((1<<j)&i) {
                    s += v[j].second;
                    double a = 1.0;
                    int u = i^(1<<j);
                    for (pair<int, int> p : d[j])
                        if ((1<<p.first)&u)
                            a *= (100-p.second)/100.0;
                    dp[i] = min(dp[i], dp[u] + a*v[j].first);
                }
            }
            ans = min(ans, (double)dp[i]/s);
        }
        /*double ans = DBL_MAX;
        for (int i = 1; i < 1<<m; i++) {
            int s = 0;
            for (int j = 0; j < m; j++)
                if ((1<<j)&i)
                    s += v[j].second;
            ans = min(ans, (double)dp[i]/s);
        }*/
        for (int i = 0; i < m; i++)
            d[i].clear();
        printf("%.4lf\n", ans);
    }
    return 0;
}


