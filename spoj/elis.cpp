#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e1+7;
int n, v[N];

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    set<int> s;
    for (int i = 0; i < n; i++) {
        set<int>::iterator it = lower_bound(s.begin(), s.end(), v[i]);
        if (it != s.end())
            s.erase(it);
        s.insert(v[i]);
    }
    printf("%d\n", s.size());
    return 0;
}


