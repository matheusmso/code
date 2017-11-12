#include <bits/stdc++.h>
using namespace std;

#define debug(args...) fprintf(stderr,args)

typedef long long lint;

const int INF = 0x3f3f3f3f;
const lint LINF = 0x3f3f3f3f3f3f3f3f;

int main() {
    double x1, x2, y1, y2;
    scanf(" %lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double x = fabs(x1-x2);
    double y = fabs(y1-y2);
    printf("%.4lf\n", sqrt(x*x + y*y));
    return 0;
}


