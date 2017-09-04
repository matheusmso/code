#include <bits/stdc++.h>
using namespace std;

int k, v[30];
string s;

int main() {
    cin >> k >> s;
    for (char c : s)
        v[c-'a']++;
    bool solvable = true;
    for (int i = 0; i < 30; i++)
        if (v[i] != 0)
            if (v[i]%k != 0)
                solvable = false;
    if (solvable) {
        string ans;
        for (int i = 0; i < 30; i++)
            if (v[i] != 0)
                for (int j = 0; j < v[i]/k; j++)
                    ans.push_back(i+'a');
        for (int i = 0; i < k; i++)
            cout << ans;
        cout << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}

