#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[3], t;
    for (int k = 0; k < n; k++) {
        int machula = -1;
        cin >> s[0] >> t >> s[1] >> t >> s[2];
        for (int i = 0; i < s[0].size(); i++)
            if (!isdigit(s[0][i]))
                machula = 0;
        for (int i = 0; i < s[1].size(); i++)
            if (!isdigit(s[1][i]))
                machula = 1;
        for (int i = 0; i < s[2].size(); i++)
            if (!isdigit(s[2][i]))
                machula = 2;
        int ans;
        if (machula == 2) {
            ans = stoi(s[0]) + stoi(s[1]);
            cout << s[0] << " + " << s[1] << " = " << ans << endl;
        }
        else if (machula == 0) {
            ans = stoi(s[2]) - stoi(s[1]);
            cout << ans << " + " << s[1] << " = " << s[2] << endl;
        }
        else {
            ans = stoi(s[2]) - stoi(s[0]);
            cout << s[0] << " + " << ans << " = " << s[2] << endl;
        }
    }
    return 0;
}

