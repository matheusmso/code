#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, m;
string s = "";

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf(" %d %d", &n, &m);
    if (n > m) {
        for (int i = 0; i < min(m, n); i++)
            s += "BG";
        for (int i = 0; i < n+m-2*min(m, n); i++)
            s += "B";
    }
    else {
        for (int i = 0; i < min(m, n); i++)
            s += "GB";
        for (int i = 0; i < m+n-2*min(m, n); i++)
            s += "G";
    }
    printf("%s\n", s.c_str());
    return 0;
}


