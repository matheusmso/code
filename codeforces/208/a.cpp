#include <bits/stdc++.h>
using namespace std;

string s, t;

int main() {
    cin >> s;
    s.push_back(' ');
    s.push_back(' ');
    s.push_back(' ');
    for (int i = 0; i < s.size(); ) {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            i += 3;
            if (t.size() != 0 && t[t.size()-1] != ' ')
                t.push_back(' ');
        }
        else
            t.push_back(s[i++]);
    }
    cout << t << endl;
    return 0;
}

