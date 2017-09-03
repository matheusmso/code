#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    scanf(" %d", &t);
    while (t--) {
        int x;
        scanf(" %d", &x);
        if (360%(180-x) == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

