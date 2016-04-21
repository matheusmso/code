#include <bits/stdc++.h>

using namespace std;

bool c (int x, int y) {
    return x>y;
}

int main() {
    int N;
    scanf("%d", &N);
    while(N--) {
        int M;
        int v[1007];
        int a[1007];
        scanf("%d", &M);
        for (int i = 0; i < M; i++) {
            int k;
            scanf("%d", &k);
            a[i] = k;
            v[i] = k;
        }
        sort(v, v+M, c);
        int res = 0;
        for (int i = 0; i < M; i++)
            if (v[i] == a[i])
                res++;
        printf("%d\n", res);
        res = 0;
    }
    return 0;
}


