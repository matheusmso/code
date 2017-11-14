#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 5e2+7;
int p;
char s[N];

int main() {
    scanf(" %d", &p);
    while (p--) {
        scanf(" %s", s);
        bool o = true;
        for (int i = 1; s[i]; i++)
            if (tolower(s[i]) <= tolower(s[i-1])) {
                o = false;
                break;
            }
        printf("%s: %c\n", s, "NO"[o]);
    }
    return 0;
}


