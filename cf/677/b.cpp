#include <bits/stdc++.h>
using namespace std;

int n, h, k, t, rem;
long long int tim;

int main() {
    scanf("%d%d%d", &n, &h, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        if (t+rem <= h) {
            rem += t;
            tim += rem/k;
            rem %= k;
        }
        else {
            tim += t/k;
            tim++;
            rem = t%k;
        }
    }
    if (rem) tim++;
    cout << tim << endl;
    return 0;
}


