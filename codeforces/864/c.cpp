#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;
const int N = 1e4+7;
int a, b, f, k;

void end() {
    printf("-1\n");
    exit(0);
}

int main() { 
    scanf(" %d %d %d %d", &a, &b, &f, &k);
    if (b < f) end();
    int cap = b-f;
    int ans = 0;
    int gap;
    for (int i = 1; i < k; i++) {
        gap = (i%2) ? a-f : f;
        gap *= 2;
        if (gap > cap) {
            ans++;
            cap = b;
        }
        if (gap > b) end();
        cap -= gap;
    }
    gap = (k%2) ? a-f : f;
    if (gap > cap)
        ans++;
    if (gap > b) end();
    printf("%d\n", ans);
    return 0;
}
