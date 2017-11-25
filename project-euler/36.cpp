#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e6;

bool ok(int k) {
    string s = to_string(k);
    for (int i = 0; i < s.size()/2; i++)
        if (s[i] != s[s.size()-1-i])
            return false;
    deque<int> v;
    int t = 0;
    for (int i = 0; t < k; i++) {
        if ((1<<i)&k) {
            v.push_back(1);
            t += (1<<i);
        }
        else
            v.push_back(0);
    }
    for (int i = 0; i < v.size()/2; i++)
        if (v[i] != v[v.size()-1-i])
            return false;
    return true;
}

int main() {
    lint sum = 0;
    for (int i = 1; i < N; i++)
        if (ok(i))
            sum += i;
    printf("%lld\n", sum);
    return 0;
}


