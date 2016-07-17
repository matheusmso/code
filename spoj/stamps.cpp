#include <bits/stdc++.h>
using namespace std;

int scenario, v[1007];

int main() {
    scanf(" %d", &scenario);
    for (int k = 0; k < scenario; k++) {
        int total, n;
        scanf(" %d %d", &total, &n);
        printf("Scenario #%d:\n", k+1);
        for (int i = 0; i < n; i++)
            scanf(" %d", &v[i]);
        sort(v, v+n);
        int count = 0;
        for (int i = n-1; i >= 0 && total > 0; i--) {
            total -= v[i];
            count++;
        }
        if (total > 0)
            printf("impossible\n");
        else
            printf("%d\n", count);
    }
    return 0;
}

