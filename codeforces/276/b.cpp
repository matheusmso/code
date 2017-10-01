#include <bits/stdc++.h>
using namespace std;

string s;
int f[30];

int main() {
    cin >> s;
    for (char c : s)
        f[c-'a']++;
    int moves = 0;
    for (int i = 0; i < 30; i++)
        if (f[i]%2 == 1) moves++;
    if (moves == 0)
        moves++;
    printf("%s\n", moves%2 == 0 ? "Second" : "First");
    return 0;
}
