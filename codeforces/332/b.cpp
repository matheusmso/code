#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 2e5+7;
int n, k;
lint v[N];

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf(" %lld", v+i);
    lint asum = 0;
    lint bsum = 0;
    int b = n-k;
    int a = b-k;
    int curb = b;
    for (int i = n-k; i < n; i++)
        bsum += v[i];
    for (int i = n-k-k; i < n-k; i++)
        asum += v[i];
    lint acsum = asum;
    lint bcsum = bsum;
    lint best = asum + bsum;
    for (int i = a-1, j = b-1, l = n-1; i >= 0; i--, j--, l--) {
        bcsum -= v[l];
        bcsum += v[j];
        acsum -= v[j];
        acsum += v[i];
        if (bcsum >= bsum) {
            bsum = bcsum;
            curb = j;
        }
        if (acsum + bsum >= best) {
            best = acsum + bsum;
            a = i;
            b = curb;
        }
    }
    printf("%d %d\n", a+1, b+1);
    return 0;
}

