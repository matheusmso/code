#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6;
int p[N+7];
vector<lint> pr;

bool test(int k) {
    string s = to_string(k);
    if (s.size() == 1) return binary_search(pr.begin(), pr.end(), k);
    for (int i = 0; i < s.size(); i++) {
        rotate(s.begin(), s.begin()+1, s.end());
        if (!binary_search(pr.begin(), pr.end(), stoi(s))) return false;
    }
    return true;
}

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
    int ans = 0;
    for (int i = 2; i < N; i++)
        ans += test(i);
    printf("%d\n", ans);
    return 0;
}


