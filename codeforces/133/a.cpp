#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    for (char a : s)
        if (a == 'H' || a == 'Q' || a == '9') {
            cout << "YES" << endl;
            return 0;
        }
    cout << "NO" << endl;
    return 0;
}
