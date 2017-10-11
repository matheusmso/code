#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
char s[N];
int n;

int main() {
    scanf(" %s", s);
    n = strlen(s);
    int st = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'h' && st == 0) st++;
        else if (s[i] == 'e' && st == 1) st++;
        else if (s[i] == 'l' && (st == 2 || st == 3)) st++;
        else if (s[i] == 'o' && st == 4) st++;
    }
    printf("%s\n", st == 5 ? "YES" : "NO");
    return 0;
}


