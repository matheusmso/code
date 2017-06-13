#include <bits/stdc++.h>
using namespace std;

const int N = (int) 6e4+7;

int v[N], t[N], n;

int mergesort(int l, int r) {
    if (r-l <= 1) return 0;
    int inv = mergesort(l, (r+l)/2);
    inv += mergesort((r+l)/2, r);
    int i = l;
    int j = (l+r)/2;
    int k = 0;
    while (i < (l+r)/2 && j < r) {
        if (v[i] <= v[j]) {
            t[k] = v[i];
            k++;
            i++;
        }
        else {
            t[k] = v[j];
            inv += (l+r)/2-i;
            k++;
            j++;
        }
    }
    while (i < (l+r)/2) {
        t[k] = v[i];
        k++;
        i++;
    }
    while (j < r) {
        t[k] = v[j];
        k++;
        j++;
    }
    for (int i = l; i < r; i++)
        v[i] = t[i-l];
    return inv;
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    printf("%d\n", mergesort(0, n));
    return 0;
}

