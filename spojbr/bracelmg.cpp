#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e4+7;
int n;
char p[N], t[N];

int main() {
    scanf(" %d", &n);
    while (n--) {
        scanf(" %s %s", p, t);
        string pp(p, strlen(p));
        string tt(t, strlen(t));
        while (tt.size() <= 2*pp.size())
            tt = tt+tt;
        tt = tt+tt;
        string ppi = pp;
        reverse(ppi.begin(), ppi.end());
        if (tt.find(pp) !=string::npos || tt.find(ppi) != string::npos)
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}


