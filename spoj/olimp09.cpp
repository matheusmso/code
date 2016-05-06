#include <bits/stdc++.h>

using namespace std;

int gold[100];
int silver[100];
int bronze[100];

bool c(int x, int y) {
    if (gold[x] > gold[y])
        return true;
    if (gold[x] < gold[y])
        return false;
    if (silver[x] > silver[y])
        return true;
    if (silver[x] < silver[y])
        return false;
    if (bronze[x] > bronze[y])
        return true;
    if (bronze[x] < bronze[y])
        return false;
    if (x < y)
        return true;
    return false;
}

int main() {
    int N, M;
    scanf("%d %d", &N ,&M);
    for (int i = 0; i < M; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        gold[a]++;
        silver[b]++;
        bronze[c]++;
    }
    int aux[N+1];
    for (int i = 1; i < N + 1; i++)
        aux[i] = i;
    sort(aux+1, aux+N+1, c);
    for (int i = 1; i < N + 1; i++)
        printf("%d ", aux[i]);
    printf("\n");
    return 0;
}


