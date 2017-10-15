#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e5+7;
int n, x, v[N];

int main() {
    bool has = false;
    scanf(" %d %d", &n, &x);
    for (int i = 500; i < n + 500; i++) {
        scanf(" %d", v+i);
        if (v[i] == x) has = true;
    }
    int cnt = 0;
    if (!has) {
        v[500+n] = x;
        cnt++;
        n++;
    }
    for (int i = 500; i < n+500; i++)
        debug("%d ", v[i]);
    debug("\n%d\n", cnt);
    sort(v+500, v+n+500);
    int mid = 500 + (n-1)/2;
    int i = 500;
    int j = 500 + n;
    while (v[mid] != x) {
        if (v[mid] < x) {
            v[j] = v[j-1];
            j++;
        }
        else {
            v[i-1] = v[i];
            i--;
        }
        for (int k = i; k < j; k++)
            debug("a%d\n", v[k]);
        debug("%d %d\n", i, j);
        mid = i + (j-i-1)/2;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}


