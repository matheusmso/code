#include <bits/stdc++.h>
using namespace std;

const int N = (int)5e4+7;
const int M = (int)1e5+7;
int n, m, v[N], no[M];;

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    scanf(" %d", &m);
    for (int i = 0; i < m; i++) {
        int x;
        scanf(" %d", &x);
        no[x] = 1;
    }
    for (int i = 0; i < n; i++)
        if (no[v[i]] == 0)
            printf("%d ", v[i]);
    printf("\n");
    return 0;
}



