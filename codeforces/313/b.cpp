#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+7;
int m, v[N], bit[N];
string s;

void update(int k) {
    for (int i = k; i < N; i += (i & -i))
        bit[i] += 1;
}

int query(int k) {
    int ans = 0;
    for (int i = k; i > 0; i -= (i & -i))
        ans += bit[i];
    return ans;
}

int main() {
    cin >> s;
    scanf(" %d", &m);
    for (int i = 0; i < s.size()-1; i++)
        if (s[i] == s[i+1])
            update(i+1);
    for (int i = 0; i < m; i++) {
        int l, r;
        scanf(" %d %d", &l, &r);
        printf("%d\n", query(r-1)-query(l-1));
    }
    return 0;
}
