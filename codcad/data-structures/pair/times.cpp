#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
set<string> team[N];
vector<pair<int, string>> v;
int n, t;

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        pair<int, string> p;
        cin >> p.second >> p.first;
        v.push_back(p);
    }
    sort(v.begin(), v.end(), greater<pair<int, string>>());
    for (int i = 0; i < n; i++)
        team[i%t].insert(v[i].second);
    for (int i = 1; i <= t; i++) {
        cout << "Time " << i << endl;
        for (string s : team[i-1])
            cout << s << endl;
        cout << endl;
    }
    return 0;
}

