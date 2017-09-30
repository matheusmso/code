#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int v[30];

int main() {
    cin >> s1 >> s2;
    if (s1.size() != s2.size()) {
        printf("NO\n");
        return 0;
    }
    for (char c : s1)
        v[c-'a']++;
    for (char c : s2)
        v[c-'a']--;
    for (int i = 0; i < 30; i++)
        if (v[i]) {
            printf("NO\n");
            return 0;
        }
    int diff = 0;
    for (int i = 0; i < s1.size(); i++)
        if (s1[i] != s2[i])
            diff++;
    printf("%s\n", diff == 2 ?  "YES" : "NO");
    return 0;
}
