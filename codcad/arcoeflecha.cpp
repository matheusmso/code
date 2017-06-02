#include <bits/stdc++.h>
using namespace std;

typedef long long lint;
const int N = (int) 1e5+7;
lint v[N], t[N];
int n;

lint mergesort(int l, int r) {
    if (r-l <= 1) return 0;
    lint inv = mergesort(l, (l+r)/2);
    inv += mergesort((l+r)/2, r);
    int i = l;
    int j = (l+r)/2;
    int k = 0;
    while (i < (l+r)/2 && j < r) {
        if (v[i] > v[j]) {  
            t[k] = v[i];
            i++;
            k++;
        }
        else {
            t[k] = v[j];
            inv += (lint)(l+r)/2-i;
            j++;
            k++;
        }
    }
    while (i < (l+r)/2)
        t[k++] = v[i++];
    while (j < r)
        t[k++] = v[j++];
    for (int i = l; i < r; i++)
        v[i] = t[i-l];
    return inv;
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        lint x, y;
        scanf(" %lld %lld", &x, &y);
        v[i] = (x*x) + (y*y);
    }
    printf("%lld\n", mergesort(0, n));
    /*for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");*/
    return 0;
}

