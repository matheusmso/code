#include <bits/stdc++.h>
using namespace std;

const int mod = (int) 1e9 + 7;

long long ans;

string s;
int main() {
    cin >> s;
    ans = 1;
    for (int i = 0; i < s.size(); i++) {
        int k;
        if (isdigit(s[i]))
            k = s[i]-'0';
        else if (isupper(s[i]))
            k = s[i]-'A'+10;
        else if (islower(s[i]))
            k = s[i]-'a'+36;
        else if (s[i] == '-')
            k = 62;
        else
            k = 63;
        for (int j = 0; j < 6; j++) {
            if ((k & (1 << j)) == 0)
                ans = (3 * ans) % mod;
        }
    }
    cout << ans << endl;
    return 0;
}

