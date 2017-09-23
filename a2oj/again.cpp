#include <bits/stdc++.h>
using namespace std;

int t, c[30];
string s;

int main() {
    scanf(" %d", &t);
    while (t--) {
        cin >> s;
        memset(c, 0, sizeof(c));
        for (int i = 0; i < s.size(); i++)
            c[s[i]-'a']++;
        int indmax = -1;
        int m = 0;
        for (int i = 29; i >= 0; i--) {
            if (c[i] >= m) {
                m = c[i];
                indmax = i;
            }
        }
        printf("%d %c\n", m, indmax+'a');
    }
    return 0;
}

            
