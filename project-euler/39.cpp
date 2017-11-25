#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
int q[N];
map<int, int> m;

int main() {
    int n = 1e3+1;
    for (int i = 0; i < n; i++)
        q[i] = i*i;
    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
            if (binary_search(q+1, q+n, q[i]+q[j]))
                m[i+j+lower_bound(q+1, q+n, q[i]+q[j])-q]++;
    int ma = 0;
    int id;
    for (pair<int, int> p : m) {
        if (p.first > 1000) continue;
        if (p.second > ma) {
            ma = p.second;
            id = p.first;
        }
    }
    printf("%d %d\n", ma, id);
    return 0;
}


