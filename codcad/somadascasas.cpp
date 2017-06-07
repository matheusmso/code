#include <bits/stdc++.h>
using namespace std;

const int N = (int) 1e5+7;
int n, v[N], k;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    scanf(" %d", &k);
    for (int i = 0; i < n; i++) {
        if (binary_search(v, v+n, k-v[i])) {
            printf("%d %d\n", v[i], k-v[i]);
            break;
        }
    }
    return 0;
}

