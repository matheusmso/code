#include <bits/stdc++.h>
using namespace std;

int n, k, a[100007];

int main() {
    int posm = 0;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int j = 1;
    int m, p = k;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            m = a[j]-a[i]-1;
            if (m <= p) {
                ans = max(ans,m);
                p -= m;
            }
            else
                break;
        }
    }
    printf("%d\n", ans);
    return 0;
}


