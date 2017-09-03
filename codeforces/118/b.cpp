#include <bits/stdc++.h>
using namespace std;

int n, v[27][27];;

int main() {
    scanf(" %d", &n);
    v[0][0] = -n;
    for (int i = 1; i < n; i++)
        v[0][i] = v[0][i-1]+1;
    for (int i = n+1; i <= 2*n; i++)
        v[0][i] = v[0][i-1]-1;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= 2*n; j++)
            v[i][j] = v[i-1][j]+1;
    for (int i = n+1; i <= 2*n; i++)
        for (int j = 0; j <= 2*n; j++)
            v[i][j] = v[i-1][j]-1;
    
    for (int i = 0; i <= 2*n; i++)
        for (int j = 0; j <= 2*n; j++) {
            if (v[i][j] < 0) printf("  ");
            else if (v[i][j] == 0 && j > 0 && 
                    (v[i][j-1] > 0 || i == 0 || i == 2*n)) {
                printf("0\n");
                break;
            }
            else printf("%d ", v[i][j]);
        }
    return 0;
}
