#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e2+7;
int z[N];
char s[N];

int main() {
    int t;
    scanf(" %d", &t);
    while (t--) {
        scanf(" %s", s);
        int n = strlen(s);
        for (int i = 1, l = 0, r = 0; i < n; i++) {
            z[i] = 0;
            if (i <= r)
                z[i] = min(r-i+1, z[i-l]);
            while (i+z[i] < n && s[i+z[i]] == s[z[i]])
                z[i]++;
            if (i+z[i]-1 > r)
                l = i, r = i+z[i]-1;
        }
        z[n] = 0;
        int ans;
        for (int i = 1; i <= n; i++) {
            if (n%i == 0 && i+z[i] == n) {
                ans = i;
                break;
            }
        }
        printf("%d\n", ans);
        if (t != 0)
            printf("\n");
    }
    return 0;
}

