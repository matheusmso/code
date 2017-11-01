#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;

int main() {
    while (scanf(" %d", &n) && n) {
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            int a, b;
            scanf(" %d %d", &a, &b);
            m[a]++;
            m[b]--;
        }
        bool f = true;
        for (pair<int, int> p : m)
            if (p.second != 0) {
                printf("NO\n");
                f = false;
                break;
            }
        if (f)
            printf("YES\n");
    }
    return 0;
}


