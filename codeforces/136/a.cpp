#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
int n, ans[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        ans[x] = i+1;
    }
    for (int i = 1; i <= n; i++)
        printf("%d ", ans[i]);
    printf("\n");
    return 0;
}


