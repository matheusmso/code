#include <bits/stdc++.h>
using namespace std;

int v[100007];

int main() {
    int n;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", &v[i]);
    int ans = 0;
    int k = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] > v[i-1])
            ans++;
        else
            ans = 0;
        k = max(ans, k);
    }
    printf("%d\n", k+1);
    return 0;
}

