#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
int a, b, c;
vector<lint> v;

int sd(lint k) {
    k = abs(k);
    int ans = 0;
    while (k) {
        ans += k%10;
        k /= 10;
    }
    return ans;
}

int main() {
    scanf(" %d %d %d", &a, &b, &c);
    for (lint x = 1; x <= 81; x++) {
        lint t = 1;
        for (int i = 0; i < a; i++)
            t *= x;
        t *= b;
        t += c;
        if (x == sd(t) && t > 0 && t < 1e9) v.push_back(t);
    }
    printf("%d\n", v.size());
    for (lint k : v)
        printf("%d ", k);
    if (v.size()) printf("\n");
    return 0;
}
