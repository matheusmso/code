#include <bits/stdc++.h>
using namespace std;

string a, b, d;
int f[30];

int main() {
    cin >> a >> b >> d;
    for (char c : a)
        f[c-'A']--;
    for (char c : b)
        f[c-'A']--;
    for (char c : d)
        f[c-'A']++;
    for (int i = 0; i < 30; i++)
        if (f[i]) {
            printf("NO\n");
            return 0;
        }
    printf("YES\n");
    return 0;
}


