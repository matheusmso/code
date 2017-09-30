#include <bits/stdc++.h>
using namespace std;

int n, s, f;
char p, c;

int main() {
    scanf(" %d", &n);
    scanf(" %c", &p);
    for (int i = 1; i < n; i++) {
        scanf(" %c", &c);
        if (c != p) {
            if (c == 'F') f++;
            else s++;
        }
        p = c;
    }
    printf("%s\n", f > s ? "YES" : "NO");
    return 0;
}


