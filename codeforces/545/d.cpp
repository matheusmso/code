#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int n;
priority_queue<lint> pq;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        lint x;
        scanf(" %lld", &x);
        pq.push(-x);
    }
    int ans = 0;
    lint sum = 0;
    while (!pq.empty()) {
        while (!pq.empty() && -pq.top() < sum)
            pq.pop();
        if (!pq.empty()) {
            sum -= pq.top();
            pq.pop();
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}


