#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
char s[N];

int main() {
    scanf(" %s", s);
    int n = strlen(s);
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (isupper(s[i])) cnt++;
    if (cnt > n-cnt)
        for (int i = 0; i < n; i++)
            s[i] = toupper(s[i]);
    else 
        for (int i = 0; i < n; i++)
            s[i] = tolower(s[i]);
    printf("%s\n", s);
    return 0;
}


