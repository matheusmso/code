#include <bits/stdc++.h>
using namespace std;

int n;
map<int, int> m;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        m[x]++;
    }
    if (m.size() == 1) {
        long long w = m.begin()->second;
        printf("%d %lld\n", 0, (w*(w-1))/2);
    }
    else {
        int b = m.rbegin()->first - m.begin()->first;
        long long w = (long long)m.rbegin()->second*m.begin()->second;
        printf("%d %lld\n", b, w);
    }
    return 0;
}
