#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
char s[N];

int main() {
    scanf(" %s", s);
    int n = strlen(s);
    int sum = 0;
    int op = 1;
    for (int i = 0; i < n; i++) {
        sum = (sum + op*(s[i]-'0'));
        op *= -1;
    }
    printf("%s\n", sum % 11 == 0 ? "S" : "N");
    return 0;
}

