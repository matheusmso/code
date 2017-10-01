#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int n, k, v[N];

int main() {
    scanf(" %d %d", &n, &k);
    int p, minh;
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    int cur = 0;
    for (int i = 0; i < k; i++)
        cur += v[i];
    minh = cur;
    p = 1;
    for (int i = k; i < n; i++) {
        cur += v[i];
        cur -= v[i-k];
        if (cur < minh) {
            minh = cur;
            p = i-k+2;
        }
    }
    printf("%d\n", p);
    return 0;
}

    
