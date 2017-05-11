#include <bits/stdc++.h>
using namespace std;

const int N = (int)1e5;

int f[N], t, x, p = 2;

void sieve() {
    f[1] = 1;
    for(int i = 2; i < N; i++) {
        if(!f[i]) {
            f[i] = i;
            for (int j = 2*i; j < N; j += i)
                f[j] = i;
        }
    }
}

int main() {
    sieve();
    vector<int> ans;
    while (ans.size() < 1000) {
        int count = 0;
        int aux = p;
        map<int, int> m;
        while(aux > 1) {
            m[f[aux]]++;
            aux /= f[aux];
            if (m.size() == 3) {
                ans.push_back(p);
                break;
            }
        }
        p++;
    }
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d", &x);
        printf("%d\n", ans[x-1]);
    }
    return 0;
}
