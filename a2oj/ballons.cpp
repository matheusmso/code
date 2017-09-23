#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
int t, n, x, y, v[N];

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d %d %d", &n, &x, &y);
        for (int i = 0; i < n; i++)
            scanf(" %d", v+i);
        if (v[0] == x && v[n-1] == y)
            printf("BOTH\n");
        else if (v[0] == x)
            printf("EASY\n");
        else if (v[n-1] == y)
            printf("HARD\n");
        else
            printf("OKAY\n");
    }
    return 0;
}
