#include <bits/stdc++.h>
using namespace std;

int n;
long long v[20000];

int main() {
    v[0] = 1;
    int i = 0;
    while (i < 19000) {
        i++;
        v[i] = v[i-1] + 6*i;
    }
    while (scanf(" %d", &n) && n != -1) {
        if(binary_search(v, v+19000, n))
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}

