#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
    scanf("%d", &n);
    for (int k = 0; k < n; k++) {
        int a, b;
        cin >> s >> a >> b;
        if (a>= 2400 && a<b) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}

