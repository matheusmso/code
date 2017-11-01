#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

const int N = 2e4+7;
int n, m, v[N];

int main() {
    while (scanf(" %d %d", &n, &m) && n) {
        map<int, int> mp;
        for (int i = 0; i < n; i++)
            scanf(" %d", v+i);
        for (int i = 0; i < m; i++) {
            int x;
            scanf(" %d", &x);
            mp[x]++;
        }
        int cst = 0;
        for (int i = 0; i < n; i++) {
            map<int, int>::iterator it;
            it = mp.lower_bound(v[i]);
            if (it == mp.end()) {
                cst = -1;
                break;
            }
            cst += it->first;
            it->second -= 1;
            if (it->second == 0)
                mp.erase(it);
        }
        if (cst == -1)
            printf("Loowater is doomed!\n");
        else
            printf("%d\n", cst);
    }
    return 0;
}


