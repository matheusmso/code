#include <bits/stdc++.h>

using namespace std;

#define maxn 100100

int n, v[maxn], aux[maxn];

int mergesort (int sta, int end) {
    if (sta == end)
        return 0;
    int inv = mergesort (sta, (sta+end)/2) + mergesort ((sta+end)/2+1, end);
    int tam = 0;
    int j = (sta+end)/2+1;
    for (int i = sta; i <= (sta+end)/2; i++) {
        while (j <= end && v[j] < v[i]) {
            aux[tam] = v[j];
            tam++;
            j++;
            inv += (sta+end)/2+1-i;
        }
        aux[tam] = v[i];
        tam++;
    }
    while (j <= end) {
        aux[tam] = v[j];
        tam++;
        j++;
    }
    for (int i= sta; i <= end; i++) 
        v[i] = aux[i-sta];
    return inv;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    printf("%d\n", mergesort(0, n-1));
    return 0;
}


