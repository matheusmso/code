#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e6+7;
lint d[N];
vector<lint> p;

void sieve() {
    for (lint i = 2; i < N; i++) {
        if (d[i] == 0) {
            d[i] = i;
            p.push_back(i);
            for (lint j = i*i; j < N; j += i)
                d[j] = i;
        }
    }
}

int main() {
    sieve();
    lint ans = 0;
    for (lint i = 1; i <= N; i++) {
        ans += i;
        lint aux = ans;
        vector<int> t;
        for (lint k : p) {
            if (aux == 1) break;
            if (aux%k == 0) t.push_back(0);
            while (aux%k == 0) {
                t[t.size()-1]++;
                aux /= k;
            }
        }
        lint div = 1;
        for (int k : t)
            div *= (lint)k+1;
        if (div > 500) {
            printf("%lld\n", ans);
            break;
        }
    }
    return 0;
}


