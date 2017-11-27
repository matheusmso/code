#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int main() {
    for (int i = 1; i < 1e6; i++) {
        bool ok = true;
        map<int, int> m[10];
        int a = i;
        while (a) {
            m[1][a%10]++;
            a /= 10;
        }
        for (int j = 2; j <= 6 && ok; j++) {
            a = i*j;
            while (a) {
                m[j][a%10]++;
                a /= 10;
            }
            for (pair<int, int> p : m[j])
                if (m[1][p.first] != p.second) {
                    ok = false;
                    break;
                }
        }
        if (ok) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}


