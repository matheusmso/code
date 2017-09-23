#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+7;
int v[N], n;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    sort(v, v+n);
    swap(v[0], v[n-1]);
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}

        
