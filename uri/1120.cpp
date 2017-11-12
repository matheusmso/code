#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e2+7;
char s[N];
int d;

bool iszero() {
    int cnt = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] != '0' && s[i] != 'a') {
            cnt++;
            break;
        }
    return cnt == 0;
}

int main() {
    while (scanf(" %d %s", &d, s)) {
        if (d == 0 && iszero())
            break;
        for (int i = 0; s[i]; i++)
            if (s[i]-'0' == d)
                s[i] = 'a';
        for (int i = 0; s[i]; i++) {
            if (s[i] != '0' && s[i] != 'a')
                break;
            else
                s[i] = 'a';
        }
        if (iszero())
            printf("0");
        else
            for (int i = 0; s[i]; i++)
                if (s[i] != 'a')
                    printf("%c", s[i]);
        printf("\n");
    }
    return 0;
}


