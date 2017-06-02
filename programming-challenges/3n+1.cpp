#include<bits/stdc++.h>
using namespace std;
typedef long long lint;
const int N = (int)1e6+7;
int i, j, dp[N];

int solve(lint n) {
  int aux = n;
  int count = 1;
  while (n != 1ll) {
    count++;
    if (n % 2ll == 0) n /= 2ll;
    else n = n*3ll+1ll;
  }
  dp[aux] = count;
  return count;
}

int main() {
  while (scanf(" %d %d", &i, &j) == 2) {
    int ans = 0;
    for (int k = min(i, j); k <= max(i, j); k++)
      ans = max(ans, dp[k] ? dp[k] : solve((lint)k));
    printf("%d %d %d\n", i, j, ans);
  }
}

