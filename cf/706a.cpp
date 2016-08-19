#include <bits/stdc++.h>
using namespace std;

int n;

double dist(double x, double y, double a, double b) {
    return abs(sqrt((a-x)*(a-x)+(b-y)*(b-y)));
}

int main() {
    double a, b;
    scanf(" %lf %lf", &a, &b);
    scanf(" %d", &n);
    double ans = 1e20;
    for (int i = 0; i < n; i++) {
        double x, y, v;
        scanf(" %lf %lf %lf", &x, &y, &v);
        double d = dist(a, b, x, y);
        ans = min(ans, d/v);
    }
    printf("%.7lf\n", ans);
    return 0i;
}

