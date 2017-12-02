#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
int s[] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
int p[N];

int num(int k) {
    int a = 0;
    while (k) {
        a += s[k%10];
        k /= 10;
    }
    return a;
}

int main() {
    int ans = 0;
    for (int i = 1; i < 1e7+1; i++) {
        int n = num(i);
        while (n != 1 && n != 89) {
            if (p[n] != 0)
                n = p[n];
            n = num(n);
        }
        if (n == 89) {
            p[n] = 89;
            ans++;
        }
        else
            p[n] = 1;
    }
    printf("%d\n", ans);
    return 0;
}


