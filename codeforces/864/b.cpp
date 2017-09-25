#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
    cin >> n >> s;
    int ans = 0;
    set<char> se;
    for (int i = 0; i < n; i++) {
        if (isupper(s[i]))
            se.clear();
        else se.insert(s[i]);
        ans = max(ans, (int)se.size());
    }
    printf("%d\n", ans);
    return 0;
}
