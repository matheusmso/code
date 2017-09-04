#include <bits/stdc++.h>
using namespace std;

int a, b, c;
string s, t, x, y, k;

int main() {
    cin >> s >> t;
    a = stoi(s);
    b = stoi(t);
    c = a+b;
    for (char cs : s)
        if (cs != '0')
            x.push_back(cs);
    for (char cs : t)
        if (cs != '0')
            y.push_back(cs);
    while (c) {
        int tmp = c%10;
        c /= 10;
        if (tmp == 0) continue;
        k.push_back(tmp+'0');
    }
    reverse(k.begin(), k.end());
    bool ans = stoi(k) == (stoi(x) + stoi(y));
    printf("%s\n", ans ? "YES" : "NO");
    return 0;
}


