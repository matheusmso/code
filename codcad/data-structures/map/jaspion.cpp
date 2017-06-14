#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e3+7;
int t, m, n;
char s[N];

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d %d", &m, &n);
        map<string, string> ma;
        while (m--) {
            scanf(" %[^\n]", s);
            string a(s);
            scanf(" %[^\n]", s);
            string b(s);
            ma[a] = b;
            cout << a << endl << b << endl;
        }
        while (n--) {
            scanf(" %s", s);
            string a(s);
            if (ma.count(a))
                cout << ma[a] << endl;
            else
                cout << a <<
        }
    }
    return 0;
}

