#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int t, v, k1, k2;

double calc(double a) {
    double x = v*v*sin(2*a)/10.0;
    double y = v*v*sin(a)*sin(a)/20.0;
    return k1*x + k2*y;
}

int main() {
    scanf(" %d", &t);
    while (t--) {
        scanf(" %d %d %d", &v, &k1, &k2);
        double l = 0;
        double h = acos(-1)/2.0;
        double m;
        for (int i = 0; i < 40; i++) {
            m = (l+h)/2;
            if (calc(h) > calc(l))
                l = m;
            else
                h = m;
        }
        printf("%.3lf %.3lf\n", m, calc(m));
    }
    return 0;
}


