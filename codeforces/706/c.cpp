#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
const lint inf = 0x3f3f3f3f3f3f3f3f;
const int N = (int)1e5+7;
int c[N], n;
lint dp[N][2];
string a[N][2];

lint solve(lint i, lint r) {
	if (i == n) return 0;
	if (dp[i][r] != -1) return dp[i][r];
	lint ans = inf;
	if (a[i-1][r] <= a[i][0])
		ans = min(ans, solve(i+1, 0));
	if (a[i-1][r] <= a[i][1])
		ans = min(ans, solve(i+1, 1)+c[i]);
	return dp[i][r] = ans;
}

int main() {
	scanf(" %d", &n);
	for (int i = 0; i < n; i++)
		scanf(" %d", &c[i]);
	for (int i = 0; i < n; i++) {
		cin >> a[i][0];
		a[i][1] = a[i][0];
		reverse(a[i][1].begin(), a[i][1].end());
	}
	memset(dp, -1, sizeof(dp));
	lint ans = min(solve(1, 0), solve(1, 1)+c[0]);
	printf("%lld\n", (ans == inf) ? -1 : ans);
	return 0;
}
