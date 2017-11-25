#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

string s;

int main() {
    int i = 1;
    while (s.size() < 1e6+7)
        s += to_string(i++);
    int a = 1;
    for (int i = 1; i < 1e7; i *= 10)
        a *= s[i-1]-'0';
    printf("%d\n", a);
    return 0;
}


