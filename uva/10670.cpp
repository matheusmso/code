#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int te, n, m, l;

int main() {
    scanf(" %d", &te);
    for (int tt = 0; tt < te; tt++) {
        scanf(" %d %d %d", &n, &m, &l);
        vector<pair<int, string>> v;
        for (int i = 0; i < l; i++) {
            vector<char> s, na, nb;
            char c;
            int a, b;
            while (scanf(" %c", &c) && c != ':')
                s.push_back(c);
            string t(s.begin(), s.end());
            while (scanf("%c", &c) && c != ',')
                na.push_back(c);
            a = stoi(string(na.begin(), na.end()));
            while (scanf("%c", &c) && c != '\n')
                nb.push_back(c);
            b = stoi(string(nb.begin(), nb.end()));
            int k = n;
            int cst = 0;
            while (k != m) {
                int t1 = (k+1)/2;
                if (k-t1 >= m) {
                    if (a*(k-t1) > b) {
                        cst += b;
                        k -= t1;
                    }
                    else {
                        cst += a;
                        k--;
                    }
                }
                else {
                    cst += a*(k-m);
                    k = m;
                }
            }
            v.push_back({cst, t});
        }
        sort(v.begin(), v.end());
        printf("Case %d\n", tt+1);
        for (pair<int, string> p : v)
            printf("%s %d\n", p.second.c_str(), p.first);
    }
    return 0;
}


