#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6+7;
int p[N];
vector<lint> prime;

void sieve() {
    for (lint i = 2; i < N; i++)
        if (p[i] == 0) {
            p[i] = 1;
            prime.push_back(i);
            for (lint j = i*i; j < N; j += i)
                p[j] = 1;
        }
}

lint test(int a, int b) {
    lint i;
    for (i = 0; ; i++) {
        if (!binary_search(prime.begin(), prime.end(), i*i+a*i+b))
            break;
    }
    return i;
}

int main() {
    lint m = 0;
    lint ans;
    sieve();
    for (int i = -999; i < 1000; i++)
        for (int j = -999; j < 1000; j++) {
            lint x = test(i, j);
            if (x > m) {
                m = x;
                ans = i*j;
            }
        }
    printf("%d %d\n", ans, m);
    return 0;
}


