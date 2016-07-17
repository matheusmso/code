#include <bits/stdc++.h>
using namespace std;

string sa, sb;
int memo[2007][2007];

int dp(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (memo[a][b] != -1)
        return memo[a][b];
    if (sa[a-1] == sb[b-1])
        return dp(a-1, b-1);
    return memo[a][b] = 1+min(min(dp(a, b-1), dp(a-1, b)), dp(a-1, b-1));
}

int main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        cin >> sa >> sb;
        memset(memo, -1, sizeof(memo));
        cout << dp(sa.size(), sb.size()) << endl;
    }
    return 0;
}

