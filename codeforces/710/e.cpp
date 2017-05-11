#include <bits/stdc++.h>
using namespace std;
typedef long long lint;
const lint m = 0x3f3f3f3f3f3f3f3f;
const int N = (int)1e7+7;
lint dp[N], n, x, y;

int main() {
	scanf(" %lld %lld %lld", &n, &x, &y);
        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i-1]+x;
            if(i&1)
                dp[i] = min(dp[i], dp[(i+1)/2]+y+x);
            else
                dp[i] = min(dp[i], dp[i/2]+y);
        }
	printf("%lld\n", dp[n]);
	return 0;
}
