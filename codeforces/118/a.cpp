#include <bits/stdc++.h>
using namespace std;

string s;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || 
            c == 'o' || c == 'u' || c == 'y');
}

int main() {
    cin >> s;
    for (char c : s) {
        char t = tolower(c);
        if (isVowel(t)) continue;
        printf(".%c", t);
    }
    printf("\n");
    return 0;
}

