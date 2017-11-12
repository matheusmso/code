#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int a, b, n;
char c;

int main() {
    scanf(" %d %d %c %d", &n, &a, &c, &b);
    int ans = (c == '+') ? a + b : a * b;
    if (ans > n) printf("OVERFLOW\n");
    else printf("OK\n"); 
    return 0;
}


