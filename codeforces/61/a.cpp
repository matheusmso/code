#include <bits/stdc++.h>
using namespace std;

string a, b;
const int N = 1e2+7;
char s[N];

int main() {
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
        s[i] = ((a[i]-'0')^(b[i]-'0'))+'0';
    cout << s << endl;
    return 0;
}
