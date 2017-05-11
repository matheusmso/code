#include <bits/stdc++.h>
using namespace std;

int a[107];
int n;
int dp[5][200];

int solve(int act, int day) {
    if (day == n || act > 2)
        return 0;
    if (dp[act][day] != -1)
        return dp[act][day];
    int ans = 0;
    if (a[day] == 0)
        ans = 1 + solve(0, day+1);
    else if (a[day] == 1) {
        if(act == 1)
            ans = 1 + solve(0, day+1);
        else
            ans = solve(1, day+1);
    }
    else if (a[day] == 2) {
        if(act == 2)
            ans = 1 + solve(0, day+1);
        else
            ans = solve(2, day+1);
    }
    else {
        if (act == 1)
            ans = solve(2, day+1);
        else if (act == 2)
            ans = solve(1, day+1);
        else
            ans = min(solve(1, day+1), solve(2, day+1));
    }
    return dp[act][day] = ans;
}
int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", &a[i]);
    memset(dp, -1, sizeof(dp));
    printf("%d\n", solve(0, 0));
    return 0;
}

