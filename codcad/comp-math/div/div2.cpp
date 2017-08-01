#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
char s[N];

int main() {
    scanf(" %s", s);
    int n = strlen(s);
    if (n < 2) {
        printf("%s\n", ((s[n-1]-'0')%4 == 0) ? "S" : "N");
        printf("%s\n", ((s[n-1]-'0')%9 == 0) ? "S" : "N");
        printf("%s\n", ((s[n-1]-'0')%25 == 0) ? "S" : "N");
        return 0;
    }
    int t = s[n-1]-'0';
    t += 10*(s[n-2]-'0');
    printf("%s\n", t%4 == 0 ? "S" : "N");
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = (sum + (s[i]-'0')) % 9;
    printf("%s\n", sum % 9 == 0 ? "S" : "N");
    printf("%s\n", t%25 == 0 ? "S" : "N");
    return 0;
}

