#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int c, l, m;

int main() {
    scanf(" %d", &c);
    while (c--) {
        scanf(" %d %d", &l, &m);
        l *= 100;
        queue<int> q[2];
        for (int i = 0; i < m; i++) {
            int x;
            char s[10];
            scanf(" %d %s", &x, s);
            if (s[0] == 'l')
                q[0].push(x);
            else
                q[1].push(x);
        }
        int op = 0;
        int ans = 0;
        while (!q[0].empty() || !q[1].empty()) {
            int t = l;
            while (!q[op].empty() && t - q[op].front() >= 0) {
                t -= q[op].front();
                q[op].pop();
            }
            ans++;
            op = 1-op;
        }
        printf("%d\n", ans);
    }
    return 0;
}


