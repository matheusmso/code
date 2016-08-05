#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
  scanf(" %d", &n);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int x;
    scanf(" %d", &x);
    ans ^= x;
  }
  printf("%d\n", ans);
  return 0;
}
