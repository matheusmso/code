#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int abund(int k) {
    int s = 1;
    for (int i = 2; i < k; i++)
        if (k%i == 0)
            s += i;
    return s;
}

int main() {
    lint sum = 0;
    vector<int> v;
    for (int i = 12; i <= 28123; i++)
        if (abund(i) > i)
            v.push_back(i);
    for (int i = 1; i <= 28123; i++) {
        bool ok = true;
        for (int j : v) {
            if (j > i) break;
            if (binary_search(v.begin(), v.end(), i-j)) {
                ok = false;
                break;
            }
        }
        if (ok) {
            debug("%d\n", i);
            sum += (lint)i;
        }
    }
    printf("%lld\n", sum);
    return 0;
}


