#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int n;
int c[5];

int main() {
    scanf(" %d", &n);
    for (int tt = 1; tt <= n; tt++) {
        printf("Teste %d\n", tt);
        map<int, int> m;
        for (int i = 0; i < 5; i++) {
            scanf(" %d", c+i);
            m[c[i]]++;
        }
        sort(c, c+5);
        bool g = true;
        for (int i = 1; i < 5; i++)
            if (c[i] != c[i-1]+1)
                g = false;
        int ans = 0;
        if (g)
            ans = c[0]+200;
        else if (m.size() == 2) {
            for (pair<int, int> p : m) {
                if (p.second == 4) {
                    ans = max(ans, p.first+180);
                    break;
                }
                if (p.second == 3) {
                    ans = max(ans, p.first+160);
                    break;
                }
            }
        }
        else if (m.size() == 3) {
            vector<int> a;
            a.clear();
            for (pair<int, int> p : m) {
                if (p.second == 3) {
                    ans = max(ans, p.first+140);
                    break;
                }
                if (p.second == 2)
                    a.push_back(p.first);
            }
            if (a.size() == 2) {
                if (a[0] < a[1]) swap(a[0], a[1]);
                ans = max(ans, 3*a[0] + 2*a[1] + 20);
            }
        }
        else if (m.size() == 4) {
            for (pair<int, int> p : m)
                if (p.second == 2)
                    ans = max(ans, p.first);
        }
        printf("%d\n", ans);
    }
    return 0;
}


