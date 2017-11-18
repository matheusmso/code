#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e5;
map<lint, int> p;
vector<lint> prime;

void sieve() {
    for (lint i = 2; ; i++) {
        if (p.find(i) == p.end()) {
            prime.push_back(i);
            if (prime.size() == 1e4+1) return;
            for (lint j = i*i; j < N; j += i)
                p[j] = 1;
        }
    }
}

int main() {
    sieve();
    printf("%lld\n", prime[1e4]);
    return 0;
}


