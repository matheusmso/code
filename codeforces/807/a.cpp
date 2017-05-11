#include <bits/stdc++.h>
using namespace std;

//Is it rated?

int n, a, b, c, d;

int main() {
    scanf(" %d", &n);
    scanf(" %d %d", &a, &b);
    if (a != b) {
        printf("rated\n");
        return 0;
    }
    bool bad = false;
    for (int i = 1; i < n; i++) {
        scanf(" %d %d", &c, &d);
        if (c != d) {
            printf("rated\n");
            return 0;
        }
        if (c > a) bad = true;
        a = c;
        b = d;
    }
    printf("%s\n", bad ? "unrated" : "maybe");
    return 0;
}



