#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
lint n;

int main() {
    int cnt = 0;
    scanf(" %lld", &n);
    while (n) {
        if (n%10 == 4 || n%10 == 7)
            cnt++;
        n /= 10;
    }
    if (cnt == 4 || cnt == 7)
        printf("YES\n");
    else printf("NO\n");
    return 0;
}


