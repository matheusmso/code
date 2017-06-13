#include<bits/stdc++.h>
using namespace std;

const int N = (int)1e5+7;
int n, v[N], t[N];

void mergesort(int l, int r) {
    if (r-l <= 1) return;
    mergesort(l, (l+r)/2);
    mergesort((l+r)/2, r);
    int i = l;
    int j = (l+r)/2;
    int k = 0;
    while (i < (l+r)/2 && j < r) {
        if (v[i] >= v[j])
            t[k++] = v[i++];
        else
            t[k++] = v[j++];
    }
    while (i < (l+r)/2)
        t[k++] = v[i++];
    while (j < r)
        t[k++] = v[j++];
    for (int i = l; i < r; i++)
        v[i] = t[i-l];
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++)
        scanf(" %d", v+i);
    mergesort(0, n);
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
    return 0;
}

