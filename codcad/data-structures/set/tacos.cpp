#include <bits/stdc++.h>
using namespace std;

int c;
set<int> s;

int main() {
    scanf(" %d", &c);
    int ans = 0;
    while (c--) {
        int x;
        scanf(" %d", &x);
        if (s.count(x))
            s.erase(x);
        else {
            ans += 2;
            s.insert(x);
        }
    }
    printf("%d\n", ans);
    return 0;
}

