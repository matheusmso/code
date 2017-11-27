#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6;
int p[N];
vector<lint> pr;
lint s[N];

void sieve() {
    for (lint i = 2; i < N; i++)
        if (p[i] == 0) {
            p[i] = 1;
            pr.push_back(i);
            for (lint j = i*i; j < N; j += i)
                p[j] = 1;
        }
}

int main() {
    sieve();
    for (lint i = 1; i < N; i++)
        s[i] = i*i;
    for (lint i = 3; i < N; i += 2)
        if (!binary_search(pr.begin(), pr.end(), i)) {
            bool ok = true;
            for (lint j : pr) {
                if (j >= i) break;
                if ((i-j)%2 != 0) continue;
                if (binary_search(s+1, s+N, (i-j)/2)) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                printf("%d\n", i);
                return 0;
            }
        }
    return 0;
}


