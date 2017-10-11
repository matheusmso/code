#include <bits/stdc++.h>
using namespace std;

map<char, int> m;

int main() {
    char c;
    while (scanf(" %c", &c) != EOF) {
        m[c]++;
    }
    if (m.size()%2 == 0)
        printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
    return 0;
}

