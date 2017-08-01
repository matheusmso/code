#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
char s[N];

int main() {
    scanf(" %s", s);
    int n = strlen(s);
    printf("%s\n", ((s[n-1]-'0')%2) == 0 ? "S" : "N");
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = (sum + (s[i]-'0')) % 3;
    printf("%s\n", sum % 3 == 0 ? "S" : "N");
    printf("%s\n", ((s[n-1]-'0')%5) == 0 ? "S" : "N");
    return 0;
}

