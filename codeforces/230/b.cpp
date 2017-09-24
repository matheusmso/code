#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 1e6+7;
set<lint> p;
int n, c[N];

void sieve() {
    for (lint i = 2; i < N; i++) {
        if (c[i] == 0) {
            p.insert(i*i);
            c[i] = 1;
            for (lint j = i*i; j < N; j += i)
                c[j] = 1;
        }
    }
}

int main() {
    sieve();
    scanf(" %d", &n);
    while (n--) {
        lint x;
        cin >> x;
        printf("%s\n", p.count(x) ? "YES" : "NO");
    }
    return 0;
}
