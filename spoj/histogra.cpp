#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = (int)1e5+7;
lint n, l[N], r[N], v[N];

int main() {
    while (scanf(" %lld", &n) != EOF && n) {
        for (int i = 0; i < n; i++)
            scanf(" %lld", v+i);
        //min
        stack<lint> s;
        for (int i = 0; i < n; i++) {
            while (!s.empty() && v[i] < v[s.top()]) {
                lint temp = s.top();
                s.pop();
                r[temp] = i-1;
            }
            if (s.empty()) l[i] = 0;
            else l[i] = s.top()+1;
            s.push(i);
        }
        while (!s.empty()) {
            lint temp = s.top();
            s.pop();
            r[temp] = n-1;
        }
        /*for (int i = 0; i < n; i++)
            printf("%d %d %d\n", i, l[i], r[i]);*/
        lint ans = 0;
        for (int i = 0; i < n; i++) {
            lint inter = r[i]-l[i]+1;
            ans = max(ans, inter*v[i]);
        }
        printf("%lld\n", ans);
    }
    return 0;
}


