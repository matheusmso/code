#include <bits/stdc++.h>
using namespace std;

int t, n;

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d", &n);
        int diag = ceil(sqrt(8*n+1))/2;
        int e = ((diag-1)*(diag-1)+diag-1)/2;
        printf("TERM %d IS ", n);
        if (diag%2 == 0)
            printf("%d/%d\n", n-e, diag+1-n+e);
        else
            printf("%d/%d\n", diag+1-n+e, n-e);
    }
    return 0;
}
