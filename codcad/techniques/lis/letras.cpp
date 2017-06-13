#include <bits/stdc++.h>
using namespace std;

string s;
vector<int> v;
vector<int>::iterator it;

int main() {
    cin >> s;
    for (auto i : s) {
        it = upper_bound(v.begin(), v.end(), i-'A');
        if (it == v.end()) v.push_back(i-'A');
        else *it = i-'A';
    }
    cout << v.size() << endl;
    return 0;
}

