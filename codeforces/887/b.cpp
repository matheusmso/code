#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int d[3][6];
int n;
int used[3];

bool can(int a) {
    if (a == 0) return true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 6; j++)
            if (used[i] == 0 && d[i][j] == a%10) {
                used[i] = 1;
                if (can(a/10)) return true;
                used[i] = 0;
            }
    return false;
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 6; j++)
            scanf(" %d", &d[i][j]);
    for (int x = 1; x <= 1000; x++) {
        memset(used, 0, sizeof(used));
        if (!can(x)) {
            printf("%d\n", x-1);
            break;
        }
    }
    return 0;
}


