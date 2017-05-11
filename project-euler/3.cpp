#include <bits/stdc++.h>
using namespace std;

int main() {
    int v[5];
    int o = 0;
    long long a = 600851475143LL;
    for (int i = 2; a != 1; i++)
        if (a%i == 0) {
            v[o++] = i;
            a /= i;
            i--;
        }
    for (int i = o-1; i >= 0; i--) {
        int k;
        for (k = 2; k < v[i]; k++)
            if (v[i]%k == 0)
                break;
        if (k == v[i]) {
            cout << v[i] << endl;
            break;
        }
    }
    return 0;
}

