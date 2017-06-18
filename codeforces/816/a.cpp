#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int h = s[1]-'0' + 10*(s[0]-'0');
    int m = s[4]-'0' + 10*(s[3]-'0');
    if (s[1] == s[3] && s[0] == s[4]) {
        printf("0\n");
        return 0;
    }
    int ans = 0;
    while (1) {
        m += 1;
        if (m == 60) {
            m = 0;
            h = (h+1)%24;
        }
        ans++;
        if (h%10 == m/10 && h/10 == m%10)
            break;
    }
    printf("%d\n", ans);
    return 0;
}

