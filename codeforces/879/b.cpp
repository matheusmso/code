#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e2+7;
int v[N], n;
lint k, w[N];
deque<int> q;

int main() {
    scanf(" %d %lld", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf(" %d", v+i);
        q.push_back(v[i]);
    }
    if (k >= n) 
        printf("%d\n", n);
    else {
        while (w[q.front()] != k) {
            if (q[0] > q[1]) {
                int wi = q.front();
                q.pop_front();
                int lo = q.front();
                q.pop_front();
                q.push_back(lo);
                w[wi]++;
                q.push_front(wi);
            }
            else {
                int lo = q.front();
                q.pop_front();
                int wi = q.front();
                q.pop_front();
                w[lo] = 0;
                w[wi]++;
                q.push_front(wi);
                q.push_back(lo);
            }
        }
        printf("%d\n", q.front());
    }
    return 0;
}


