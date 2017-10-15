#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

lint n, r, avg;

int main() {
    scanf("%lld %lld %lld", &n, &r, &avg);
    lint need = n*avg;
    priority_queue<pair<lint, lint>> pq;
    for (int i = 0; i < n; i++) {
        lint a, b;
        scanf(" %lld %lld", &a, &b);
        need -= a;
        if (a < r) pq.push({-b, a});
    }
    lint ans = 0;
    while (!pq.empty()) {
        if (need <= 0) break;
        pair<lint, lint> p = pq.top();
        pq.pop();
        lint can = min(r - p.second, need);
        need -= can;
        ans -= can * p.first;
    }
    printf("%lld\n", ans);
    return 0;
}


