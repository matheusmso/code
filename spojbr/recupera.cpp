#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n, t, ans;

int main() {
    while (scanf(" %d", &n) != EOF) {
        printf("Instancia %d\n", ++t);
        int sum = 0;
        ans = INF;
        for (int i = 0; i < n; i++) {
            int x;
            scanf(" %d", &x);
            if (x == sum)
                if (ans == INF)
                    ans = x;
            sum += x;
        }
        if (ans == INF) printf("nao achei\n");
        else printf("%d\n", ans);
        printf("\n");
    }
    return 0;
}


