#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;

int main() {
    scanf(" %d", &n);
    int ns, nf;
    ns = nf = -1;
    for (int i = 0; 7*i <= n; i++) {
        if ((n-7*i)%4 == 0) {
            ns = i;
            nf = (n-7*i)/4;
        }
    }
    if (nf == -1) printf("%d\n", -1);
    else {
        for (int i = 0; i < nf; i++)
            printf("%c", '4');
        for (int i = 0; i < ns; i++)
            printf("%c", '7');
        printf("\n");
    }
    return 0;
}


