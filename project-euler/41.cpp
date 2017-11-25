#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e7;
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

bool ispan(lint k) {
    lint a = k;
    int s = 0;
    vector<int> v(10, 0);
    while (a) {
        v[a%10]++;
        a /= 10;
        s++;
    }
    if (v[0] > 0) return false;
    for (int i = 1; i <= s; i++)
        if (v[i] != 1) return false;
    return true;
}

int main() {
    sieve();
    lint ans;
    for (lint k : pr)
        if (ispan(k))
            ans = k;
    printf("%lld\n", ans);
    return 0;
}


