#include <bits/stdc++.h>
using namespace std;
 
#define debug(args...) fprintf(stderr,args)
 
typedef long long lint;
 
const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;
 
const int N = 1e2+7;
int n, m, t, v[N], inq[N];
 
int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d %d", &n, &m);
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            scanf(" %d", v+i);
            q.push({v[i], i});
            pq.push(v[i]);
        }
        int ans = 0;
        while (!q.empty()) {
            pair<int, int> p = q.front();
            q.pop();
            if (p.first < pq.top())
                q.push(p);
            else {
                ans++;
                if (p.second == m) break;
                pq.pop();
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
 
