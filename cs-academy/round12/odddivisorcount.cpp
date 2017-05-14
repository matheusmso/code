#include <bits/stdc++.h>
using namespace std;

int p[2000];
void sieve() {
    for (int i = 2; i <= 1200; i++) {
        if (!p[i]) {
            p[i] = i;
            for (int j = i*i; j <= 1200; j += i) {
                p[j] = i;
            }
        }
    }
}

int div(int x) {
    map<int, int> m;
    int ans = 1;
    while (x > 1) {
        m[p[x]]++;
        x /= p[x];
    }
    for (pair<int, int> p : m) 
        ans = ans*(p.second+1);
    return ans;
}

int a, b;
int main() {
    int count = 0;
    sieve();
    scanf(" %d %d", &a, &b);
    for (int i = a; i < b+1; i++) {
        //printf("%d %d\n", i, div(i));
        if (div(i)%2) 
            count++;
    }
    printf("%d\n", count);
    return 0;
}
