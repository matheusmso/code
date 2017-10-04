#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
int n;
vector<string> g[15];
vector<lint> v;

bool ok(string s) {
    if (s.size() % 2) return false;
    int f = 0;
    for (char c : s)
        if (c == '4')
            f++;
    return f == s.size()/2;
}

int main() {
    scanf(" %lld", &n);
    g[0].push_back("");
    for (int i = 1; i < 12; i++) {
        for (string s : g[i-1]) {
            string a = s+"4";
            string b = s+"7";
            g[i].push_back(s+"4");
            if (ok(a))
                v.push_back(stoll(s+"4"));
            g[i].push_back(s+"7");
            if (ok(b))
                v.push_back(stoll(s+"7"));
        }
    }
    vector<lint>::iterator it;
    it = lower_bound(v.begin(), v.end(), n);
    cout << v[it-v.begin()] << endl;
    return 0;
}


