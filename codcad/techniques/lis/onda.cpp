#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int m, v[N], p1[N], p2[N];
vector<int> v1, v2;
vector<int>::iterator it;
//p1[i] max lis endind at i
//p2[i] max lds ending at i
int main() {
    scanf(" %d", &m);
    for (int i = 0; i < m; i++)
        scanf(" %d", v+i);
    for (int i = 0; i < m; i++) {
        it = lower_bound(v1.begin(), v1.end(), v[i]);
        int p = it-v1.begin();
        if (it == v1.end()) v1.push_back(v[i]);
        else *it = v[i];
        p1[i] = p+1;
    }
    for (int i = m-1; i >= 0; i--) {
        it = lower_bound(v2.begin(), v2.end(), v[i]);
        int p = it-v2.begin();
        if (it == v2.end()) v2.push_back(v[i]);
        else *it = v[i];
        p2[i] = p+1;
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        ans = max(ans, 2 * min(p1[i], p2[i]) - 1);
    }
    printf("%d\n", ans);
    return 0;
}

