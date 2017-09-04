#include <bits/stdc++.h>
using namespace std;

int n;

bool lucky(int k) {
    while (k) {
        if (k%10 != 4 && k%10 != 7)
            return false;
        k /= 10;
    }
    return true;
}

int main() {
    scanf(" %d", &n);
    for(int i = 1; i <= n; i++)
        if (n%i == 0 && lucky(i)) {
            printf("YES\n");
            return 0;
        }
    printf("NO\n");
    return 0;
}


