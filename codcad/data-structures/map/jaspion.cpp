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
        }
        while (n--) {
            scanf(" %[^\n]", s);
            char *t = strtok(s, " ");
            while (t != NULL) {
                string a(t);
                if (ma.count(a))
                    cout << ma[a] << " ";
                else
                    cout << a << " ";
                t = strtok(NULL, " ");
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

