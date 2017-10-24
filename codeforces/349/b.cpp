#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int v, d[10], ans[10];
priority_queue<pair<int, int>> pq;

int main() {
    scanf(" %d", &v);
    int mincost = INF;
    int mind = 0;
    for (int i = 1; i <= 9; i++) {
        scanf(" %d", d+i);
        if (d[i] < mincost) {
            mincost = d[i];
            mind = i;
        }
    }
    int digits = v/mincost;
    if (digits == 0) {
        printf("-1\n");
        return 0;
    }
    for (int i = 0; i < digits; i++) {
        for (int j = 9; j >= 1; j--) {
            if (v-d[j] >= mincost*(digits-i-1)) {
                printf("%d", j);
                v -= d[j];
                break;
            }
        }
    }
    return 0;
}


