#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, f[3];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf(" %d", &x);
        if (x == 25) f[0]++;
        else if (x == 50) {
            f[1]++;
            f[0]--;
            if (f[0] < 0) {
                printf("NO\n");
                return 0;
            }
        }
        else if (x == 100) {
            f[2]++;
            if (f[1] == 0) f[0] -= 2;
            else f[1]--;
            f[0]--;
            if (f[0] < 0 || f[1] < 0) {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}


