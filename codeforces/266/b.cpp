#include <bits/stdc++.h>
using namespace std;

int n, t;
char s[57];

int main() {
    scanf(" %d %d %s", &n, &t, s);
    while (t--) {
        vector<int> v;
        for (int i = 1; i < n; i++)
            if (s[i] == 'G' && s[i-1] != 'G')
                v.push_back(i);
        for (int k : v) {
            s[k] = 'B';
            s[k-1] = 'G';
        }
    }
    printf("%s\n", s);
    return 0;
}


