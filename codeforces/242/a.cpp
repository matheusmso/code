#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int x, y, a, b;
vector<pair<int, int>> v;

int main() {
    scanf(" %d %d %d %d", &x, &y, &a, &b);   
    for (int i = max(b+1, a); i <= x; i++) {
        for (int j = b; j <= y && j < i; j++)
            v.push_back({i, j});
    }
    sort(v.begin(), v.end());
    printf("%d\n", v.size());
    for (pair<int, int> p : v)
        printf("%d %d\n", p.first, p.second);
    return 0;
}


