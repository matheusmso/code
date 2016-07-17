#include <bits/stdc++.h>
using namespace std;

long long memo[10007];
int n;
string s;
long long dp(int pos) {
    if (pos == n)
        return 1;
    if (pos > n)
        return 0;
    if (memo[pos] != -1)
        return memo[pos];
    long long ans = 0;
    int curr = s[pos]-'0';
    if (curr == 0)
        return 0;
    ans = dp(pos+1);
    if ((curr == 2 && s[pos+1]-'0' <= 6) || curr == 1)
        ans += dp(pos+2);
    return memo[pos] = ans;
}

int main() {
    while (1) {
        cin >> s;
        if (s[0] == '0') 
            break;
        n = s.size();
        s += '9';
        memset(memo, -1, sizeof(memo));
        printf("%lld\n", dp(0));
    }
    return 0;
}
