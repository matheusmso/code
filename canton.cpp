#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    scanf(" %d", &t);
    while (t--) {
        int n;
        scanf(" %d", &n);
        int pos = (sqrt(8*n+1))/2;
        printf("%d %d\n", pos, pos*(pos+1)/2-n);
    }
    return 0;
}

