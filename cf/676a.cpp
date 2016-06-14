#include <bits/stdc++.h>
using namespace std;

int n, v[107];
int ii, in;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
        if (v[i] == 1)
            ii = i;
        else if (v[i] == n)
            in = i;
    }
    if ((ii-in)*(ii-in) == (n-1)*(n-1))
        printf("%d\n", n-1);
    else {
        if (ii < in) {
            if(ii-1 > n-in)
                printf("%d\n", in-1);
            else
                printf("%d\n", n-ii);
        }
        else {
            if(in-1 > n-ii)
                printf("%d\n", ii-1);
            else
                printf("%d\n", n-in);
        }
    }
    return 0;
}

