#include <bits/stdc++.h>
using namespace std;

string a, b, s;
int x, y, n;

int main() {
    scanf(" %d", &n);
    cin >> s;
    a = s;
    x++;
    n--;
    while (n--) {
        cin >> s;
        if (s == a)
            x++;
        else {
            b = s;
            y++;
        }
    }
    if (x > y)
        cout << a << endl;
    else
        cout << b << endl;
    return 0;
}


