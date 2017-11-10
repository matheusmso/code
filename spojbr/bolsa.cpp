#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;

int main() {
    while (scanf(" %d", &n) && n) {
        priority_queue<float> b, s;
        double ans = 0.0;
        for (int i = 0; i < n; i++) {
            char c;
            float x;
            scanf(" %c %f", &c, &x);
            if (c == 'C') b.push(x);
            else s.push(-x);
            while (!s.empty() && !b.empty() && b.top() >= fabs(s.top())) {
                ans += (b.top() + s.top());
                b.pop();
                s.pop();
            }
        }
        printf("%.2lf", ans);
        printf("\n");
    }
    return 0;
}


