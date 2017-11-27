#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6;
int p[N];
vector<lint> pr, a;

void sieve() {
    for (lint i = 2; i < N; i++)
        if (p[i] == 0) {
            p[i] = 1;
            pr.push_back(i);
            for (lint j = i*i; j < N; j += i)
                p[j] = 1;
        }
}

bool ok(int k) {
    for (int i = k; i < a.size(); i++)
        if (binary_search(pr.begin(), pr.end(), a[i]-a[i-k])) {
            debug("inside %lld %d %d\n", a[i]-a[i-k], i, i-k);
            return true;
        }
    return false;
}

int main() {
    sieve();
    a.push_back(0);
    for (lint i : pr)
        a.push_back(a[a.size()-1]+i);
    for (int i = 100; i < 1e3; i++) 
        ok(i);
    return 0;
}


