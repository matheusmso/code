#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
int n, l, t[N];
priority_queue<pair<int, int>> pq;

int main() {
    scanf(" %d %d", &n, &l);
    for (int i = 1; i <= n; i++)
        pq.push({0, -i});
    for (int i = 0; i < l; i++) {
        int x;
        scanf(" %d", &x);
        pair<int, int> p = pq.top();
        pq.pop();
        t[-p.second]++;
        p.first -= x;
        pq.push(p);
    }
    for (int i = 1; i <= n; i++)
        printf("%d %d\n", i, t[i]);
    return 0;
}


