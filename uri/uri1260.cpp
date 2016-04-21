#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    bool line = false;
    cin >> n;
    string s;
    getline(cin, s);
    getline(cin, s);
    for (int i = 0; i < n; i++) {
        int count = 0;
        map<string, int> m;
        while (1) {
            getline(cin, s);
            if (s.empty()) break;
            if (m.find(s) != m.end()) {
                m[s]++;
                count++;
            }
            else {
                m[s] = 1;
                count++;
            }
        }
        map<string, int>::iterator it;
        if (line) 
            printf("\n");
        line = true;
        for (it = m.begin(); it != m.end(); it++) {
            cout << (*it).first;
            printf(" %.4lf\n", (*it).second*(100.0)/count);
        }
    }
    return 0;
}

