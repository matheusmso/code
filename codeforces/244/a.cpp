#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 1e3+7;
int n, k, used[N];
vector<int> v[N];

int main() {
    scanf(" %d %d", &n, &k);
    for (int i = 1; i <= k; i++) {
        int x;
        scanf(" %d", &x);
        v[i].push_back(x);
        used[x] = 1;
    }
    int f = 1;
    for (int i = 1; i <= k; i++) {
        while (v[i].size() < n) {
            while (used[f] == 1) f++;
            v[i].push_back(f);
            used[f] = 1;
        }
    }
    for (int i = 1; i<= k; i++) {
        for (int j : v[i])
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}


