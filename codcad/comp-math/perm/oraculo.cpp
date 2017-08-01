#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
int t;
char s[200];
lint n, k;

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %s", s);
        k = 0;
        int end;
        for (end = 0; s[end] != '!'; end++);
        int pot = 1;
        end--;
        n = 0;
        while (end >= 0) {
            n += (s[end]-'0')*pot;
            pot *= 10;
            end--;
        }
        for (int i = 0; s[i]; i++)
            k += (s[i] == '!');
        lint ans = n;
        for (lint i = 1; i*k < n; i++)
            ans *= n-i*k;
        printf("%lld\n", ans);
    }
    return 0;
}

