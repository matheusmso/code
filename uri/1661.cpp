#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;

int main() {
    while (scanf(" %d", &n) && n) {
        deque<pair<int, lint>> b, s;
        for (int i = 0; i < n; i++) {
            lint x;
            scanf(" %lld", &x);
            if (x > 0)
                b.push_back({i, x});
            else if (x < 0)
                s.push_back({i, x});
        }
        lint ans = 0;
        while (!b.empty()) {
            pair<int, lint> p = b.front();
            b.pop_front();
            while (p.second > 0) {
                pair<int, lint> se = s.front();
                s.pop_front();
                if (p.second + se.second < 0) {
                    ans += p.second*abs(se.first-p.first);
                    s.push_front({se.first, p.second+se.second});
                    p.second = 0;
                }
                else {
                    ans += -se.second*abs(se.first-p.first);
                    p.second += se.second;
                }
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}


