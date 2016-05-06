#include <bits/stdc++.h>

using namespace std;


int bubble(int v[], int size) {
    int swap = 0;
    for (int i = 0; i < size; i++) {
        for (int j= i+1; j < size; j++) {
            if (v[j] < v[i]) {
                int t = v[j];
                v[j] = v[i];
                v[i] = t;
                swap++;
            }
        }
    }
    return swap;
}


int main() {
    int N, L;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &L);
        int v[L];
        for (int j = 0; j < L; j++)
            scanf("%d", &v[j]);
        printf("Optimal train swapping takes %d swaps.\n", bubble(v, L));
    }
    return 0;
}


