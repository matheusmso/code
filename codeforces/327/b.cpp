#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = 1e7+7;
vector<int> p;
int c[N], n;

void sieve() {
    for (int i = 2; i < N; i++) {
        if (c[i] == 0) {
            p.push_back(i);
            if (p.size() > n) return;
            for (lint j = (lint)i*i; j < N; j += i)
                c[j] = 1;
        }
    }
}

int main() {
    scanf(" %d", &n);
    sieve();
    for (int i = 0; i < n; i++)
        printf("%d ", p[i]);
    printf("\n");
    return 0;
}
