#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;
typedef long long lint;
int n;

int main() {
    bool hasodd = false;
    lint sum = 0;
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        lint x;
        scanf(" %lld", &x);
        sum += x;
        if (sum%2 == 1)
            hasodd = true;
    }
    if (sum%2 == 1|| (sum%2 == 0 && hasodd)) printf("First\n");
    else printf("Second\n");
    return 0;
}


