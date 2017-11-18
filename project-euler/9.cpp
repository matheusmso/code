#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int main() {
    for (int i = 1; i < 1000; i++)
        for (int j = i+1; j < 1000; j++) {
            int x = 1000-i-j;
            if (i*i + j*j == x*x) {
                printf("%d\n", i*j*x);
                return 0;
            }
        }
    return 0;
}


