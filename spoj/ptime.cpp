#include <bits/stdc++.h>
using namespace std;

int p[10007];
map <int, int> m;

void sieve() {
    for (int i = 2; i*i < 100000007; i++) {
        if(!p[i]) {
            p[i] = i;
            for (int j = i*i; j < 10007; j += i)
                p[j] = i;
        }
    }
}

int main() {
    int n;
    scanf(" %d", &n);
    sieve();
    while (n > 1) {
        int k = n;
        while (k > 1) {
            m[p[k]]++;
            k /= p[k];
        }
        n--;
    }
    bool f = false;
    for (pair<int, int> p : m) 
        printf("%s%d^%d", f++ ? " * " : "", p.first, p.second);
    printf("\n");
    return 0;
}

