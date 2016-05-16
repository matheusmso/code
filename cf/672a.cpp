#include <bits/stdc++.h>
using namespace std;

int n;
char s[1007];

int main() {
    scanf("%d", &n);
    char* o = s;
    int total = 0;
    for (int i = 1; i <= n && total < 1005; i++) {
        int p;
        if (i < 10)
            p = 1;
        else if (i < 100)
            p = 2;
        else if (i < 1000)
            p = 3;
        sprintf(o,"%d", i);
        o += p;
        total += p;
    }
    printf("%c\n", s[n-1]);
    return 0;
}

