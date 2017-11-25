#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6;
int p[N];
vector<lint> pr;

void sieve() {
    for (lint i = 2; i < N; i++)
        if (p[i] == 0) {
            p[i] = 1;
            pr.push_back(i);
            for (lint j = i*i; j < N; j += i)
                p[j] = 1;
        }
}

bool ok(lint k) {
    lint a = k;
    while (a) {
        if (!binary_search(pr.begin(), pr.end(), a))
            return false;
        a /= 10;
    }
    lint m = 1e6;
    while (m > 1) {
        if (!binary_search(pr.begin(), pr.end(), k%m))
            return false;
        m /= 10;
    }
    return true;
}

int main() {
    sieve();
    lint sum = 0;
    int c = 0;
    for (lint i = 4; i < pr.size(); i++)
        if (ok(pr[i])) {
            debug("%lld\n", pr[i]);
            sum += pr[i];
            c++;
        }
    printf("%d %lld\n", c, sum);
    return 0;
}


