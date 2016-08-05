#include <bits/stdc++.h>
using namespace std;

int a, d, va;

int main() {
  while (scanf(" %d %d", &a, &d) && a && d) {
    va = 1000000;
    int x;
    for (int i = 0; i < a; i++) {
      scanf(" %d", &x);
      va = min (x, va);
    }
    int ans = 0;
    for (int i = 0; i < d; i++) {
      scanf(" %d", &x);
      if (x <= va)
	ans++;
    }
    if (ans > 1)
      printf("N\n");
    else
      printf("Y\n");
  }
  return 0;
}
