#include <bits/stdc++.h>
using namespace std;

int n, v[10];
char c;

int main() {
    scanf(" %d", &n);
    string s = "";
    for (int i = 0; i < n; i++) {
        scanf(" %c", &c);
        int x = c-'0';
        if (x == 1 || x == 0) continue;
        else if (x == 4) {
            v[2] += 2;
            v[3]++;
        }
        else if (x == 6) {
            v[3]++;
            v[5]++;
        }
        else if (x == 8) {
            v[2] += 3;
            v[7]++;
        }
        else if (x == 9) {
            v[7]++;
            v[2]++;
            v[3] += 2;
        }
        else v[x]++;
    }
    for (int i = 7; i >= 2; i--)
        for (int j = 0; j < v[i]; j++)
            s += to_string(i);
    cout << s << endl;
    return 0;
}

