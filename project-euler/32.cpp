#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int main() {
    int sum = 0;
    set<int> s;
    for (int i = 1; i < 2000; i++)
        for (int j = 1; j < 2000; j++) {
            int k = i*j;
            map<int, int> m;
            int a = i;
            while (a) {
                m[a%10]++;
                a /= 10;
            }
            a = j;
            while (a) {
                m[a%10]++;
                a /= 10;
            }
            a = k;
            while (a) {
                m[a%10]++;
                a /= 10;
            }
            bool ok = true;
            if (m.size() == 9) {
                for (pair<int, int> p : m)
                    if (p.second != 1 || p.first == 0)
                        ok = false;
            }
            else ok = false;
            if (ok) {
                debug("%d %d %d\n", i, j, k);
                s.insert(k);
            }
        }
    for (int i : s)
        sum += i;
    printf("%d\n", sum);
    return 0;
}


