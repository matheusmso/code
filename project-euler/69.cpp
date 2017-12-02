#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int phi(int k) {
    int ans = k;
    for (int i = 2; i*i <= k; i++) {
        if (k%i == 0) {
            while (k%i == 0)
                k /= i;
            ans -= ans/i;
        }
    }
    if (k > 1)
        ans -= ans/k;
    return ans;
}

int main() {
    int id;
    double ans = -DBL_MAX;
    for (int i = 2; i <= 1000000; i++)
        if ((double)i/phi(i) > ans) {
            ans = (double)i/phi(i);
            id = i;
        }
    printf("%lf %d\n", ans, id);
    return 0;
}


