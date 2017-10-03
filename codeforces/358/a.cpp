#include <bits/stdc++.h>
using namespace std;

const int N = 1e4+7;
int n, v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            int l = min(v[i], v[i+1]);
            int r = max(v[i], v[i+1]);
            int x = min(v[j], v[j+1]);
            int y = max(v[j], v[j+1]);
            //printf("%d %d\n", i, j);
            //printf("%d %d %d %d\n", l, r, x, y);
            if ((l < x && x < r && r < y)|| (x < l && l < y && y < r)) {
                printf("yes\n");
                return 0;
            }
        }
    }
    printf("no\n");
    return 0;
}

        
