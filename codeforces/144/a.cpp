#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
int n, v[N];

int main() {
    scanf(" %d", &n);
    int a = 0;
    int b = 101;
    int ap, bp;
    for (int i = 0; i < n; i++) {
        scanf(" %d", v+i);
        if (v[i] <= b) {
            b = v[i];
            bp = i;
        }
    }
    for (int i = n-1; i >= 0; i--)
        if (v[i] >= a) {
            a = v[i];
            ap = i;
        }
    if (ap < bp)
        printf("%d\n", ap+n-1-bp);
    else
        printf("%d\n", ap+n-2-bp);
    return 0;
}
    
