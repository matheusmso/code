#include <bits/stdc++.h>
using namespace std;

int p, x, y;

int main() {
    scanf(" %d %d %d", &p, &x, &y);
    bool c = true;
    int o = x;
    int aux = (x-y)/50;
    x = x-(50*aux);
    while (c) {
        int k = (x/50)%475;
        for (int i = 0; i < 25 && c; i++) {
            k = (k*96+42)%475;
            if (p == k+26) c = false;
        }
        x += 50;
    }
    printf("%d\n",x > o ? (x-o)/100 : 0);
    return 0;
}

