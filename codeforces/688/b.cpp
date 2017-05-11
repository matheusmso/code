#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    cin >> s;
    cout << s;
    for (int i = s.size()-1; i > -1; i--)
        printf("%c", s[i]);
    cout << endl;
    return 0;
}

