#include<bits/stdc++.h>
using namespace std;

typedef long long lint;
lint x;

int main() {
    scanf(" %lld", &x);
    if (x == 0) {
        printf("N\n");
        return 0;
    }
    x++;
    printf("%s\n", (x & x-1) == 0 ? "S" : "N");
    return 0;
}


