#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e6+7;
int s[N], n, m;
map<int, int> ma;
vector<int> r, lis;

int main() {
    scanf(" %d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf(" %d", s+i);
        ma[s[i]] = i;
    }
    for (int i = 0; i < m; i++) {
        int x;
        scanf(" %d", &x);
        if (ma.count(x))
            r.push_back(ma[x]);
    }
    for (int i : r) {
        vector<int>::iterator it;
        it = lower_bound(lis.begin(), lis.end(), i);
        if (it == lis.end())
            lis.push_back(i);
        else *it = i;
    }
    printf("%d\n", lis.size());
    return 0;
}

