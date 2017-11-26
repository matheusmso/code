#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6;
lint t[N];
char s[N];

int main() {
    for (lint i = 1; i < N; i++)
        t[i] = t[i-1]+i;
    scanf(" %s", s);
    int ans = 0;
    char *a = strtok(s, "\",");
    while (a != NULL) {
        int k = 0;
        for (int i = 0; a[i]; i++)
            k += a[i]-'A'+1;
        ans += binary_search(t, t+N, k);
        a = strtok(NULL, "\",");
    }
    printf("%d\n", ans);
    return 0;
}


